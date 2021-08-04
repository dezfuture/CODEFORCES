#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);

int cost(int x, int y)
{
    int var = x ^ y;
    int count = 0;

    while (var)
    {
        var = var & (var - 1);
        count++;
    }
    return count;
}

signed main()
{
    fast_io;

    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> a[i];
    }
    int var = a[m];
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        int len = cost(var, a[i]);
        if (len <= k)
        {
            res++;
        }
    }
    cout << res << endl;
}