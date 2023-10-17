#include <iostream>
#include <string>
#include <vector>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

// Struct to store the response data from the API
struct MemoryStruct {
    char *memory;
    size_t size;
};

// Callback function to write data from the API response
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *)userp;

    char *ptr = (char *)realloc(mem->memory, mem->size + realsize + 1);
    if (ptr == nullptr) {
        // Out of memory
        return 0;
    }

    mem->memory = ptr;
    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

string weatherStation(string keyword) {
    CURL *curl;
    CURLcode res;
    struct MemoryStruct chunk;

    chunk.memory = (char *)malloc(1);  // Will be grown as needed
    chunk.size = 0;

    curl = curl_easy_init();
    if (curl) {
        string url = "https://jsonmock.hackerrank.com/api/weather/search?name=" + keyword;
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);

        res = curl_easy_perform(curl);

        if (res == CURLE_OK) {
            json response = json::parse(chunk.memory);
            vector<string> result;

            for (const auto &data : response["data"]) {
                string name = data["name"];
                string weather = data["weather"];
                string wind, humidity;

                for (const auto &status : data["status"]) {
                    if (status.find("Wind:") != string::npos) {
                        wind = status;
                    } else if (status.find("Humidity:") != string::npos) {
                        humidity = status;
                    }
                }

                string record = name + "," + weather + "," + wind + "," + humidity;
                result.push_back(record);
            }

            // Sort the result by city name
            sort(result.begin(), result.end());

            curl_easy_cleanup(curl);
            free(chunk.memory);

            return result;
        }
        curl_easy_cleanup(curl);
        free(chunk.memory);
    }

    return {};
}

int main() {
    string keyword = "Adelaide";  // Replace with your desired keyword
    vector<string> result = weatherStation(keyword);

    for (const string &record : result) {
        cout << record << endl;
    }

    return 0;
}
