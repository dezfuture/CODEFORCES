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
    map<string, string> gems;
    map<string, bool> mp;
    gems["purple"] = "Power";
    gems["green"] = "Time";
    gems["blue"] = "Space";
    gems["orange"] = "Soul";
    gems["red"] = "Reality";
    gems["yellow"] = "Mind";

    mp["purple"] = false;
    mp["green"] = false;
    mp["blue"] = false;
    mp["orange"] = false;
    mp["red"] = false;
    mp["yellow"] = false;

    for (int i = 0; i < n; i++)
    {
        string str = "";
        cin >> str;
        mp[str] = true;
    }

    cout << 6 - n << endl;
    std::map<string, bool>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == false)
        {
            cout << gems[it->first] << endl;
        }
    }
}

int32_t main()
{

    fast_io;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}