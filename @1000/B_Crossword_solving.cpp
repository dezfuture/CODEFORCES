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

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        v1.pb(i);
    }

    for (int j = 0; j < m - n + 1; j++)
    {
        v2.clear();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i + j])
            {
                v2.pb(i);
            }
        }

        if (v1.size() > v2.size())
        {
            v1 = v2;
        }
    }

    int len = v1.size();
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << v1[i] + 1 << " ";
    }
}

int32_t main()
{
    fast_io;

    int t = 1;
    // cin >> t=1;
    while (t--)
    {
        solve();
    }

    return 0;
}