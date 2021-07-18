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
    string s, t;
    cin >> s >> t;
    string ans = "";

    char first = t[0];
    int len = s.length();
    ans += s[0];
    for (int i = 1; i < len; i++)
    {
        if (s[i] < first)
        {
            ans += s[i];
        }
        else
        {
            break;
        }
    }

    ans += first;

    cout << ans << endl;
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