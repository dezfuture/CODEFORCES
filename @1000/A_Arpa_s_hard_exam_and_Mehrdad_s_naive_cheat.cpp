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
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n % 4 == 0)
    {
        cout << 6 << endl;
    }
    else if (n % 4 == 1)
    {
        cout << 8 << endl;
    }
    else if (n % 4 == 2)
    {
        cout << 4 << endl;
    }
    else if (n % 4 == 3)
    {
        cout << 2 << endl;
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