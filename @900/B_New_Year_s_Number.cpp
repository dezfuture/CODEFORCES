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

void solve()
{
    int n;
    cin >> n;
    int a = n % 2020, b = n / 2020;
    if (a <= b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}