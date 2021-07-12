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

const int n = 1e6;
vector<int> v;

void prime()
{
    bool primes[n + 1];
    memset(primes, true, sizeof(primes));
    for (int p = 2; p * p <= n; p++)
    {
        if (primes[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                primes[i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (primes[i] == true)
        {
            v.pb(i);
        }
    }
}

int32_t main()
{
    fast_io;

    int t;
    cin >> t;
    prime();
    while (t--)
    {
        int d;
        cin >> d;
        int ans = 1, j = 1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] - 1 >= d)
            {
                ans *= v[i];
                j = v[i];
                break;
            }
        }

        for (int p = 0; p < v.size(); p++)
        {
            if (v[p] - j >= d)
            {
                ans *= v[p];
                j = v[p];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}