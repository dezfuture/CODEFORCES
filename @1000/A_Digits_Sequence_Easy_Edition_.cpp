#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int k;
    cin >> k;
    // if(k <= 9) {
    //     cout << k << endl;
    // }

    string s = "";
    for (int i = 0; i < k; i++)
    {
        s += to_string(i + 1);
    }

    cout << s[k - 1] << endl;
}