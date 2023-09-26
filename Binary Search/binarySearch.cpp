#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int to_find;
    cin >> to_find;

    int low = 0, high = n - 1;
    int mid;
    while(high - low > 1){
        int mid = low + (high - low) / 2;
        if (vec[mid] < to_find){
           low = mid + 1;
        } else {
            high = mid;
        }       
    }
    if (vec[low] == to_find)
        cout << low << endl;
    else if(vec[high] == to_find)
        cout << high << endl;
    else
        cout << "Element not found";
}