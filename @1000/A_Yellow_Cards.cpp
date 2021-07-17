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

const int M = 1e9 + 7;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}

int lcm(int a, int b)
{
    int c = __gcd(a, b);
    return (a / c) * b;
}

void solve()
{
    int a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    if (k1 > k2)
    {
        swap(a1, a2);
        swap(k1, k2);
    }
    int x = a1 * (k1 - 1) + a2 * (k2 - 1);
    int minPlayers;
    if (n < x)
    {
        minPlayers = 0;
    }
    else
    {
        minPlayers = min(a1 + a2, (n - x));
    }

    int max1 = 0, max2 = 0;

    int one = floor(n / k1);
    max1 = min(a1, one);
    n -= max1 * k1;
    a1 -= max1;

    if (a1 == 0)
    {
        int two = floor(n / k2);
        max2 = min(a2, two);
        n -= max2 * k2;
        a2 -= max2;
    }

    int maxPlayers = max1 + max2;

    cout << minPlayers << " " << maxPlayers << endl;
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