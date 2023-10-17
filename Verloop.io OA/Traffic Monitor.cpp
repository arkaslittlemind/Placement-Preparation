#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getMaxTrafficTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY start
 *  2. INTEGER_ARRAY end
 */
struct Event {
    int time;
    int type;
    
    Event(int t, int ty) : time(t), type(ty) {}
};

bool compareEvents(const Event& a, const Event& b) {
    if(a.time == b.time) {
        return a.type > b.type;
    }
    return a.time < b.time;    
}

int getMaxTrafficTime(vector<int> start, vector<int> end) {
    long long n = start.size();
    vector<Event> events;
    
    for(int i = 0; i < n; i++) {
        events.push_back(Event(start[i], 1));
        events.push_back(Event(end[i], -1));
    }
    
    sort(events.begin(), events.end(), compareEvents);
    
    long long maxTraffic = 0;
    long long currentTraffic = 0;
    long long maxTrafficTime = 0;
    
    for(const Event& event: events) {
        currentTraffic += event.type;
        if(currentTraffic > maxTraffic) {
            maxTraffic = currentTraffic;
            maxTrafficTime = event.time;
        }
    }
    return maxTrafficTime;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string start_count_temp;
    getline(cin, start_count_temp);

    int start_count = stoi(ltrim(rtrim(start_count_temp)));

    vector<int> start(start_count);

    for (int i = 0; i < start_count; i++) {
        string start_item_temp;
        getline(cin, start_item_temp);

        int start_item = stoi(ltrim(rtrim(start_item_temp)));

        start[i] = start_item;
    }

    string end_count_temp;
    getline(cin, end_count_temp);

    int end_count = stoi(ltrim(rtrim(end_count_temp)));

    vector<int> end(end_count);

    for (int i = 0; i < end_count; i++) {
        string end_item_temp;
        getline(cin, end_item_temp);

        int end_item = stoi(ltrim(rtrim(end_item_temp)));

        end[i] = end_item;
    }

    int result = getMaxTrafficTime(start, end);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
