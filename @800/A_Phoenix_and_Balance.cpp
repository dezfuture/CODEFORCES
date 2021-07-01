#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long x = pow(2.0, n), y = 0;
        long long div = n / 2;
        for (int i = 1; i < n; i++)
        {
            if (i < div)
            {
                x += pow(2.0, i);
            }
            else
            {
                y += pow(2.0, i);
            }
        }
        cout << x - y << endl;
    }
}