//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  private:
    int binarySearch(vector<int> arr, int key) {
        int low, high, mid, ans;
        int n = arr.size();
        low = 0;
        high = n - 1;
        ans = -1;
        
        while(low <= high) {
            mid = low + ((high - low) / 2);
            if(arr[mid] >= key) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if(ans == -1) {
            return 0;
        }
        return ans;
    }
  public:
    int removeStudents(int H[], int N) {
        // code here
        vector<int> vec;
        vec.push_back(H[0]);
        
        for(int i = 0; i < N; i++) {
            if(H[i] > vec.back()) {
                vec.push_back(H[i]);
            } else {
                int idx = binarySearch(vec, H[i]);
                vec[idx] = H[i];
            }
        }
        return N - vec.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends