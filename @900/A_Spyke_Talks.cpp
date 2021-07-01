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
    int n, id[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> id[i];
    }
    sort(id, id + n);
    int pairs = 0;
    for (int i = 1; i < n; ++i)
    {
        if (id[i] != 0 && id[i] == id[i - 1])
        {
            pairs += 1;
            if (i + 1 < n && id[i] == id[i + 1])
            {
                pairs = -1;
                break;
            }
        }
    }
    cout << pairs << endl;
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