// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

signed main()
{
    string s;
    cin >> s;
    int len = s.length();
    int dp[len + 1] = {0};
    for (int i = 1; i < len + 1; i++)
    {
        dp[i] += dp[i - 1] + (s[i] == s[i - 1]);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int res = 0;

        res = dp[r - 1] - dp[l - 1];

        cout << res << endl;
    }
}

// #include <stdio.h>
// int ans[100001];

// #define gc getchar
// bool negative;

// void scan(int &n)
// {
//     char c = 0;
//     negative = false;
//     n = 0;
//     c = gc();
//     while (c < 48 || c > 57)
//     {
//         if (c == '-')
//             negative = true;
//         c = gc();
//     }
//     while (c >= 48 && c <= 57)
//     {
//         (n) = (n)*10 + c - 48;
//         c = gc();
//     }
//     if (negative)
//         n = ~(n - 1);
// }
// int main()
// {
//     char left, right;
//     int i = 1, q, upper, lower;
//     left = getchar();
//     while (right = getchar())
//     {
//         if (right != '.' && right != '#')
//             break;
//         ans[i] = ans[i - 1] + (left == right);
//         left = right;
//         i++;
//     }
//     scan(q);
//     while (q--)
//     {
//         scan(lower);
//         scan(upper);
//         printf("%d\n", ans[upper - 1] - ans[lower - 1]);
//     }
//     return 0;
// }