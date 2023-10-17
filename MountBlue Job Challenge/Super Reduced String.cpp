#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    stack<char> charStack;
    
    for(char ch: s) {
        if(!charStack.empty() && charStack.top() == ch) {
            charStack.pop();
        } else {
            charStack.push(ch);
        }
    }
    string ans;
    while(!charStack.empty()) {
        ans = charStack.top() + ans;
        charStack.pop();
    }
    
    if(ans.empty()) {
        return "Empty String";
    } else {
        return ans;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
