#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define allElements(x) x.begin(), x.end()
#define doubleType long double
#define endlChar '\n'
#define separator " "
#define printOutput(x) cout << x << endl

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;

const int modulo = 1000000007;
const int infinity = LLONG_MAX;

int power(int base, int exponent) {
    int result = 1;
    while (exponent) {
        if (exponent & 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

string decimalToBinary(int number) {
    string binaryString = "";
    while (number != 0) {
        binaryString.push_back((number & 1) ? '1' : '0');
        number >>= 1;
    }
    reverse(allElements(binaryString));
    return binaryString;
}

void solveTest() {
    int decimalNumber;
    cin >> decimalNumber;
    string binaryRepresentation = decimalToBinary(decimalNumber);
    string pattern = "11";
    int patternPointer = 0;
    int position;

    for (int i = 0; i < binaryRepresentation.size(); i++) {
        if (binaryRepresentation[i] == pattern[patternPointer]) {
            patternPointer++;
            if (patternPointer == 2) {
                position = i + 1;
                break;
            }
        }
    }

    if (patternPointer <= 1) {
        printOutput(1);
        return;
    }

    int zeroCount = 0;
    for (int i = position; i < binaryRepresentation.size(); i++) {
        zeroCount += (binaryRepresentation[i] == '0');
    }

    printOutput(power(2, zeroCount));
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solveTest();
        //cout << endl;
    }

    return 0;
}
