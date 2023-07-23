#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, x, pos;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter the position at which you want to insert the element: ";
    cin >> pos;

    cout << "Enter the element you want to insert: ";
    cin >> x;

    v.insert(v.begin() + pos - 1, x);

    cout << "The array after insertion is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}