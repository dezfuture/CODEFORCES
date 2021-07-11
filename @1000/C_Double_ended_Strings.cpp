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

int lcs(string a, string b, int len1, int len2)
{
    int dp[len1 + 1][len2 + 1];
    int res = 0;

    for (int len = 1; len <= min(len1, len2); len++)
    {
        for (int i = 0; i + len <= len1; i++)
        {
            for (int j = 0; j + len <= len2; j++)
            {
                if (a.substr(i, len) == b.substr(j, len))
                {
                    res = max(res, len);
                }
            }
        }
    }
    return res;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int res = 0;
    int len1 = a.length();
    int len2 = b.length();
    res = lcs(a, b, len1, len2);
    cout << (len1 + len2 - 2 * res) << endl;
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