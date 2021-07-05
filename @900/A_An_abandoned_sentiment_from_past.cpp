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
    int a[n], b[k];
    int las = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            las = i;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    if (k > 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        a[las] = b[0];
        bool valid = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] <= a[i - 1])
            {
                valid = true;
                break;
            }
        }
        cout << (valid
                     ? "Yes"
                     : "No")
             << endl;
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