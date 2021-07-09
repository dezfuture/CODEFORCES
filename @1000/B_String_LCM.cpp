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

// string ST(string s, int n)
// {
//     string res = s;
//     for (int i = 0; i < n - 1; i++)
//     {
//         res.append(s);
//     }
//     return res;
// }

// void solve()
// {
//     string s, t;
//     cin >> s >> t;
//     int len1 = s.length();
//     int len2 = t.length();
//     int res = lcm(len1, len2);
//     // bool flag = false;
//     s = ST(s, res / len1);
//     t = ST(s, res / len2);

//     // if (s == t)
//     // {
//     cout << s << endl;
//     cout << t << endl;
//     // }
//     // else
//     // {
//     //     cout << -1 << endl;
//     // }
// }

void solve()
{
    string s, t, ans;
    cin >> s >> t;
    if (t.size() > s.size())
    {
        string tmp = s;
        s = t;
        t = tmp;
    }
    ans = s;
    int si = 0, ti = 0;
    bool flag = true;
    while (s[si] == t[ti])
    {
        si++;
        ti++;
        if (si == s.size() && ti == t.size())
        {
            flag = true;
            break;
        }
        if (si == s.size())
        {
            si = 0;
            ans += s;
        }
        if (ti == t.size())
        {
            ti = 0;
        }
    }
    if (s[si] != t[ti])
    {
        flag = false;
    }
    if (flag)
        cout << ans << endl;
    else
        cout << -1 << endl;
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
