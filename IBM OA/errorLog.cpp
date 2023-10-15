#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countFaults(int n, int m, vector<string> logs) {
    unordered_map<string, int> errorCount;
    unordered_map<string, bool> serverReplaced;
    int replacements = 0;

    for (int i = 0; i < m; i++) {
        string serverId = logs[i].substr(0, 2);  // Extract the server ID
        string status = logs[i].substr(3);  // Extract the status (success/error)

        if (status == "error") {
            errorCount[serverId]++;
            if (errorCount[serverId] == 3 && !serverReplaced[serverId]) {
                serverReplaced[serverId] = true;
                replacements++;
            }
        } else {
            errorCount[serverId] = 0;  // Reset the error count if it's a success log
        }
    }

    return replacements;
}

int main() {
    int n = 5;
    int m = 6;
    vector<string> logs = {"s2 error", "s2 error", "s3 error", "s2 error", "s3 error", "s3 error"};
    
    int result = countFaults(n, m, logs);
    
    cout << "Number of server replacements: " << result << endl;
    
    return 0;
}
