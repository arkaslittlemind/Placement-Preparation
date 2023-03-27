#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    vector<int> result;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(book[i] + book[j] == target){
                return "YES";
                break;
            }
        }
    }
    return "NO";
}

int main()
{
    int n;
    cin >> n;
    vector<int> book(n);
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }
    int target;
    cin >> target;
    cout << read(n, book, target);
}