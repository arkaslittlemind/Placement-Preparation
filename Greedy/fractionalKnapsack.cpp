//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    static bool helper(Item a, Item b) {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        
        return r1 > r2;
    }
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        //look for items which have value / weight = maximum
        
        sort(arr, arr + n, helper);
        
        int currentWeight = 0;
        double finalValue = 0.0;
        
        for(int i = 0; i < n; i++) {
            if(currentWeight + arr[i].weight <= W) {
                currentWeight += arr[i].weight;
                finalValue += arr[i].value;
            } else {
                int remainingWeight = W - currentWeight;
                finalValue += (arr[i].value / (double)arr[i].weight) * (double)remainingWeight;
                break;
            }
        }
        return finalValue;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends