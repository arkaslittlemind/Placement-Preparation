#include <bits/stdc++.h>
using namespace std;

int countFaults(int n, vector<string> logs) {
    unordered_map<string, int> errorCount;
    unordered_map<string, bool> faultyServer;
    int replacements = 0;

    for (string log : logs) {
        string serverId = log.substr(0, 2);
        string status = log.substr(3);

        if (status == "error") {
            errorCount[serverId]++;
            if (errorCount[serverId] == 3) {
                errorCount[serverId] = 0;
                if (!faultyServer[serverId]) {
                    replacements++;
                    faultyServer[serverId] = true;
                }
            }
        } else {
            errorCount[serverId] = 0;
            faultyServer[serverId] = false;
        }
    }

    return replacements;
}

int main() {
    int n = 5;
    //int m = 6;
    vector<string> logs = {"s2 error", "s2 error", "s3 error", "s2 error", "s3 error", "s3 error"};

    int result = countFaults(n, logs);

    cout << "Number of server replacements: " << result << endl;

    return 0;
}
