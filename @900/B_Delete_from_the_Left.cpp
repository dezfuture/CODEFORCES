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
    int w = 0;
    while (1)
    {
        int i = s.length() - w - 1;
        int j = t.length() - w - 1;

        if (i >= 0 && j >= 0 && s[i] == t[j])
        {
            w++;
        }
        else
        {
            break;
        }
    }
    cout << s.length() + t.length() - 2 * w << endl;
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