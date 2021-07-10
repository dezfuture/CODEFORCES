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
// const int MOD = 1000000007;
const int M = 1e9 + 7;
const int N = 1e3 + 2;
const int MAXN = 2e5 + 5;

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

// int lcm(int a, int b)
// {
//     int c = __gcd(a, b);
//     return (a / c) * b;
// }

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        int difference = k - (a[i] + a[i - 1]);
        if (difference > 0)
        {
            res += difference;
            a[i] += difference;
        }
    }
    cout << res << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int32_t main()
{
    fast_io;

    int t = 1;
    //   cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}