#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int fib[n + 2];
    int i;

    fib[0] = fib[1] = 1;
    for (i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[n] << endl;
}