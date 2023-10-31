#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'maximizeMinimumDistance' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY x
 *  2. INTEGER k
 */
 
bool isPossible(const vector<int>& x, int k, int minDist) {
    long long count = 1;
    long long last = x[0];
    
    for(int i = 1; i < x.size(); i++) {
        if(x[i] - last >= minDist) {
            count++;
            last = x[i];
        }
    }
    return count >= k; 
}

int maximizeMinimumDistance(vector<int> x, int k) {
    sort(x. begin(), x.end());
    
    long long low = 1;
    long long high = x.back() - x.front();
    long long result = -1;
    
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        
        if(isPossible(x, k, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string x_count_temp;
    getline(cin, x_count_temp);

    int x_count = stoi(ltrim(rtrim(x_count_temp)));

    vector<int> x(x_count);

    for (int i = 0; i < x_count; i++) {
        string x_item_temp;
        getline(cin, x_item_temp);

        int x_item = stoi(ltrim(rtrim(x_item_temp)));

        x[i] = x_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    int result = maximizeMinimumDistance(x, k);

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
