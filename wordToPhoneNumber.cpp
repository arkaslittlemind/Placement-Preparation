#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'getPhoneNumber' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
map<string, char> word2digit;
void initializeMap() {
    word2digit["zero"] = '0';
    word2digit["one"] = '1';
    word2digit["two"] = '2';
    word2digit["three"] = '3';
    word2digit["four"] = '4';
    word2digit["five"] = '5';
    word2digit["six"] = '6';
    word2digit["seven"] = '7';
    word2digit["eight"] = '8';
    word2digit["nine"] = '9';
}


string getPhoneNumber(string s) {
    initializeMap();
    istringstream iss(s);
    vector<string> words;
    string word, ans = "";
    
    while(iss >> word) {
        words.push_back(word);
    }
    int i = 0;
    while(i < words.size()) {
        //cout << word2digit[words[i]] << " ";
        if(words[i] == "double") {
            ans = ans + word2digit[words[i + 1]] + word2digit[words[i + 1]];
            i += 2;
            //cout << ans << endl;
        }
        else if(words[i] == "triple") {
            ans = ans + word2digit[words[i + 1]] + word2digit[words[i + 1]] + word2digit[words[i + 1]];
            i += 2;
            //cout << ans << endl; 
        }
        else {
            ans = ans + word2digit[words[i]];
            i++;
        }
    }
    return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = getPhoneNumber(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
