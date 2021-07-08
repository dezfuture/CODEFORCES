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

    int h, w, p1, p2;
    cin >> h >> w >> p1 >> p2;
    p2 = min(p2, p1 * 2);
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < w; j++)
        {
            if (row[j] == '.')
            {
                if (j + 1 < w && row[j + 1] == '.')
                {
                    row[j + 1] = '*';
                    ans += p2;
                }
                else
                    ans += p1;
            }
        }
    }
    cout << ans << endl;
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