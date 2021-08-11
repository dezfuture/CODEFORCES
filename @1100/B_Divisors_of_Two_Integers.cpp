#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    multiset<int> m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        m.insert(x);
    }

    int x = *prev(m.end());

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            m.erase(m.find(i));
        }
    }

    cout << x << " " << *prev(m.end()) << endl;
}

int main()
{
    solve();
}