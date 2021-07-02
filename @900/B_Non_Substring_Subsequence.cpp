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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        bool bad = true;
        for (int i = 0; i < l and bad; i++)
        {
            if (s[i] == s[l])
            {
                bad = false;
            }
        }

        for (int i = r + 1; i < n and bad; i++)
        {
            if (s[i] == s[r])
            {
                bad = false;
            }
        }

        cout << (bad ? "NO" : "YES") << endl;
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