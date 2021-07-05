// #include <bits/stdc++.h>
// using namespace std;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(0);
// #define endl "\n"
// #define ull unsigned long long
// #define pb push_back
// typedef long long ll;
// typedef pair<int, int> pii;
// const int MOD = 1000000007;
// const int N = 1e3 + 2;
// const int MAXN = 2e5 + 5;

// void solve()
// {
//     int n;
//     int x, y;
//     while (cin >> n)
//     {
//         map<char, int> m;
//         map<char, int>::iterator it;
//         int res = 0;
//         while (n--)
//         {
//             string s;
//             cin >> s;
//             ++m[s[0]];
//         }

//         for (it = m.begin(); it != m.end(); ++it)
//         {
//             int a = it->second;
//             if (a & 1)
//             {
//                 x = a / 2;
//                 y = a - x;
//                 res += (x * (x - 1) + y * (y - 1)) / 2;
//             }
//             else
//             {
//                 x = a / 2;
//                 res += a * (a - 1);
//             }
//         }
//         cout << res << endl;
//         m.clear();
//     }
// }

// int32_t main()
// {
//     fast_io;

//     int t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scl(n) scanf("%lld", &n)
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pfl(x) printf("%lld\n", x)

ll cnt[1000];
int main()
{

    ll m, n, t, b, c, d, i, j, k, x, y, z, l, q, r;

    ll ans = 0;
    string s;
    vector<string> v;
    scl(n);
    fr(i, n)
    {
        cin >> s;
        // v.pb(s);
        cnt[s[0]]++;
    }
    i = 0, ans = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (cnt[ch] == 3)
            ans++;
        else if (cnt[ch] > 3)
        {
            d = cnt[ch] / 2;
            x = cnt[ch] % 2;

            y = d + x;
            ans += ((d * (d - 1)) / 2) + ((y * (y - 1)) / 2);
        }
    }

    pfl(ans);
    return 0;
}