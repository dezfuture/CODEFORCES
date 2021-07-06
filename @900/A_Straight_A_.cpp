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
    int n, k;
    cin >> n >> k;
    // vector<int> v;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // v.pb(x);

        sum += x;
    }
    int res = 0;
    for (res = 0;; res++)
    {
        int a = 2 * (sum + res * k);
        int b = (2 * k - 1) * (res + n);

        if (a >= b)
        {
            cout << res;
            return;
        }
    }

    // cout << res << endl;
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