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
    int n;
    cin >> n;
    if (n == 1 || n == 2 || n == 4)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 3 == 0)
    {
        cout << n / 3 << ' ' << 0 << ' ' << 0 << endl;
    }
    else if (n % 3 == 1)
    {
        cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << endl;
    }
    else
    {
        cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << endl;
    }
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