#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin >> n;
	
	vector<long long> budgets(n);
	for(long long i = 0; i < n; i++) {
	    cin >> budgets[i];
	}
	
	sort(budgets.begin(), budgets.end(), greater<long long>());
	long long maxRevenue = 0;
	
	for(int i = 0; i < n; i++) {
	    long long revenue = budgets[i] * (i + 1);
	    maxRevenue = max(maxRevenue, revenue);
	}
	cout << maxRevenue << endl;
	return 0;
}
