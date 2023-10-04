int lowerBound(vector<int> arr, int n, int x) {
	// Write your code herei
	int low = 0, high = n - 1;
	long long ans = n;

	while(low <= high) {
		long long mid = low + (high - low) / 2;

		if(arr[mid] >= x) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return ans;
}
