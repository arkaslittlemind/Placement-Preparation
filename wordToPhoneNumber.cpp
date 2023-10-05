#include <bits/stdc++.h>
using namespace std;


string wordToPhoneNumber(string& input) {
    // Create a map of words to digits
   map<string, char> wordToDigit = {
        {"zero", '0'},
        {"one", '1'},
        {"two", '2'},
        {"three", '3'},
        {"four", '4'},
        {"five", '5'},
        {"six", '6'},
        {"seven", '7'},
        {"eight", '8'},
        {"nine", '9'}
    };

    // Split the input string into words
    istringstream iss(input);
    vector<std::string> words(istream_iterator<string>{iss},
                                    istream_iterator<string>());

    // Convert each word to its corresponding digit and append to result string
    string result;
    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        char digit = wordToDigit[word];

        // Handle repeating digits
        if (i > 0 && word == "double") {
            result += result.back();
        } else if (i > 0 && word == "triple") {
            result += result.back();
            result += result.back();
        } else {
            result += digit;
        }
    }

    return result;
}

int main() {
    string input = "five eight double two double two four eight five six";
    string output = wordToPhoneNumber(input);
    cout << output << endl; // Output: 6483

    return 0;
}
