
#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int , int r, int x)
{
	if ( >= l) {
		int mid = low + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
	int x = ;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
