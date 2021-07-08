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

// M-1
// void solve()
// {
//     long long n, k;
//     cin >> n >> k;
//     if (n == 1)
//     {
//         cout << k << endl;
//     }
//     else
//     {
//         long long m = (n + k - 1) / k;
//         k *= m;

//         cout << (k + n - 1) / n << endl;
//     }
// }

// M-2
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << k << endl;
        return;
    }
    else if (n == k)
    {
        cout << 1 << endl;
        return;
    }
    else if (n < k)
    {
        int a = k / n;
        int b = k % n;
        if (b)
        {
            a++;
        }
        cout << a << endl;
        return;
    }
    else
    {
        int a = n / k;
        int b = n % k;
        if (b)
        {
            a++;
        }
        k *= a;
        int c = k / n;
        int d = k % n;
        if (d)
        {
            c++;
        }
        cout << c << endl;
        return;
    }
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