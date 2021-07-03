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
    ll n;
    ll a, b;
    while (cin >> n)
    {
        ll r, m;
        r = n % 7;
        m = n / 7;
        a = b = 2 * m;
        if (r == 6)
        {
            a++;
        }
        if (r <= 2)
        {
            b += r;
        }
        else
        {
            b += 2;
        }
        cout << a << " " << b << endl;
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