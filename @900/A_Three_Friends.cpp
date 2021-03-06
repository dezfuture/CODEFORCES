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

int calc(int a, int b, int c)
{
    return abs(a - b) + abs(b - c) + abs(c - a);
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = calc(a, b, c);
    for (int x = -1; x <= 1; x++)
    {
        for (int y = -1; y <= 1; y++)
        {
            for (int z = -1; z <= 1; z++)
            {
                int a1 = a + x;
                int b1 = b + y;
                int c1 = c + z;
                res = std::min(res, calc(a1, b1, c1));
            }
        }
    }
    cout << res << endl;
}

int32_t main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}