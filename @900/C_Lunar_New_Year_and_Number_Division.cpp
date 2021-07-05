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
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    vector<pii> v;
    for (ll i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
    {
        v.pb({a[i], a[j]});
    }

    ll sum = 0;
    for (ll i = 0; i < n / 2; i++)
    {
        sum += v[i].first * v[i].first + 2 * v[i].second * v[i].first + v[i].second * v[i].second;
    }

    cout << sum << endl;
}

int32_t main()
{
    fast_io;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}