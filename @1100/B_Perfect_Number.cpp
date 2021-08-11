#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);

int addition(int n)
{
    int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    fast_io;

    int k;
    cin >> k;
    int res = 0;

    while (k)
    {
        res++;
        if (addition(res) == 10)
        {
            k--;
        }
    }

    cout << res << endl;
}