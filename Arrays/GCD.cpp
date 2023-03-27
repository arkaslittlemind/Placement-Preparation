#include <iostream>
#include <vector>

using namespace std;

// Function to find GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    vector<int> nums;
    int n, num;

    // Prompt user to enter vector elements
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    // Find GCD of all the elements in the vector
    int result = nums[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, nums[i]);
    }

    // Print the result
    cout << "GCD of the vector elements: " << result << endl;

    return 0;
}
