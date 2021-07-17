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

// bool comp(int n, vector<pii> &v)
// {
//     if (v[0].second < v[0].first)
//     {
//         v[0].second = v[0].first;
//     }

//     for (int i = 1; i < n; i++)
//     {
//         if (v[i - 1].second < v[i].second)
//         {
//             if (v[i - 1].second < v[i].first)
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

void solve()
{
    int n;
    cin >> n;
    vector<pii> v;
    ll lst = 20000000000;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        ll a = min(x, y);
        ll b = max(x, y);

        if (b <= lst)
        {
            lst = b;
        }
        else if (b > lst && a <= lst)
        {
            lst = a;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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