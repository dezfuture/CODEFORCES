#include <bits/stdc++.h>
using namespace std;

long long d, i, k, m, n, a[200040];

signed main()
{
    for (cin >> n >> m; i++ < n; a[i] += a[i - 1])
        cin >> a[i];
    for (; m--; cout << d << ' ' << k - a[d - 1] << endl)
        cin >> k, d = (lower_bound(a, a + n, k) - a);
}