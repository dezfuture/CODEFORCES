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
    int n, m;
    cin >> n >> m;
    int steps = 0;
    if (m > n)
    {
        cout << -1 << endl;
        return;
    }
    int t, i = 1;
    while (1)
    {
        t = m * i;
        if (n >= t && t * 2 >= n)
        {
            cout << t << endl;
            break;
        }
        i++;
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