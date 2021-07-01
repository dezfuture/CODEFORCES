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

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int ans = 1, res = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                ans++;
            }
            else
            {
                ans = 1;
            }
            res = max(res, ans);
        }
        cout << res << endl;
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