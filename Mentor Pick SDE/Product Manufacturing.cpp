#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int M;
        cin >> M;

        vector<pair<int, int>> manufacturerRanges(M);

        for (int i = 0; i < M; i++)
        {
            int a, b;
            cin >> a >> b;
            manufacturerRanges[i] = make_pair(a, b);
        }

        int Q;
        cin >> Q;

        //cout << "Test Case #" << (t + 1) << ":" << endl;

        for (int q = 0; q < Q; q++)
        {
            int productID;
            cin >> productID;

            int count = 0;

            for (int i = 0; i < M; i++)
            {
                if (productID >= manufacturerRanges[i].first && productID <= manufacturerRanges[i].second)
                {
                    count++;
                }
            }

            cout << count << endl;
        }
    }

    return 0;
}
