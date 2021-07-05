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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans[n] = {0};
    for (int i = n; i >= 0; i--)
    {
        if (a[i] > 0)
        {
            int m = i;
            ans[i] = 1;
            while (a[i]--)
            {
                ans[m--] = 1;
            }
        }
        // }just testing
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
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