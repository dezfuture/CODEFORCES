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
//     string s;
//     cin >> s;
//     int ans = 0;
//     map<char, int> m;
//     for (int i = 0; i < s.length(); i++)
//     {
//         m[s[i]]++;
//     }
//     // int ans = 0;
//     map<char, int>::iterator it;
//     for (it = m.begin(); it != m.end(); it++)
//     {
//         if (it->second > 0)
//         {
//             ans++;
//         }
//     }
//     cout << ans << endl;
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

typedef long long int ll;
#define pp pair<ll, ll>

#define max2(a, b) ((a < b) ? b : a)
#define max3(a, b, c) max2(max2(a, b), c)
#define min2(a, b) ((a > b) ? b : a)
#define min3(a, b, c) min2(min2(a, b), c)

using namespace std;

int main()
{
    ll i, j, k;
    ll count = 0;
    char ch;
    string s, t;

    cin >> s;
    map<string, int> ss;
    k = s.length() - 1;

    for (i = 0; i < s.length(); i++)
    {
        if (ss[s] == 0)
        {
            ss[s]++;
            count++;
        }

        t = s.back();
        s.pop_back();
        t.append(s);
        s = t; //cout<<s<<endl;
    }

    cout << count;

    return 0;
}