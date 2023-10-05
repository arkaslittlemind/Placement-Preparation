#include <iostream>
#include <cmath>
using namespace std;

bool canBeExpressedAsPower(int n)
{
    if (n < 4)
        return false; // Numbers less than 4 cannot be expressed as pow(a, b) where a and b are greater than 1.

    for (int a = 2; a * a <= n; ++a)
    {
        int b = 2;
        while (pow(a, b) <= n)
        {
            if (pow(a, b) == n)
                return true;
            b++;
        }
    }

    return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (canBeExpressedAsPower(N))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
