#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
const int N = 1e3 + 2;
const int MAXN = 2e5 + 5;

void solve()
{
    int k;
    cin >> k;
    char a[105][105];
    char t[5] = {'a', 'e', 'i', 'o', 'u'};
    int n, m;
    int f = 0;
    for (int i = 5; i <= sqrt(k); i++)
    {
        if (k % i == 0 && i >= 5)
        {
            f = 1;
            n = i;
            m = k / i;
        }
    }

    if (f != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        int p = -1, x = 0;
        for (int i = 0; i < n; i++)
        {
            p++;
            x = p;
            for (int j = 0; j < m; j++)
            {
                a[i][j] = t[x % 5];
                x++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
        }
        cout << endl;
    }
}

int32_t main()
{
    fast_io;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}