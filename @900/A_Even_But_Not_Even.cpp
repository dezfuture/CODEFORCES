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
    string s;
    cin >> s;
    int res = 0;
    for (auto c : s)
    {
        if ((c - '0') & 1)
        {
            res++;
        }
    }
    if (res <= 1)
    {
        cout << -1 << endl;
        return;
    }
    int count = 0;
    for (auto c : s)
    {
        if ((c - '0') & 1)
        {
            cout << c;
            count++;
        }
        if (count == 2)
        {
            break;
        }
    }
    cout << endl;
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