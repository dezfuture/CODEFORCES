#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);

int main()
{
    fast_io;

    int a, b;
    cin >> a >> b;
    int res = 0;

    while (a && b)
    {

        if (a >= b && a - 2 >= 0)
        {
            a -= 2;
            b++;
        }
        else if (b > a && b - 2 >= 0)
        {
            b -= 2;
            a++;
        }
        else
        {
            break;
        }

        res++;
    }
    cout << res << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(0);

// int main()
// {
//     fast_io;

//     int a, b;
//     cin >> a >> b;
//     int res = 0;

//     if (a == 1 && b == 1)
//     {
//         cout << res << endl;
//         return 0;
//     }
//     while (a && b)
//     {

//         res++;
//         if (a == 1)
//         {
//             a += 1;
//             b -= 2;
//         }
//         else if (b == 1)
//         {
//             b += 1;
//             a -= 2;
//         }
//         else
//         {
//             if (a <= b)
//             {
//                 a += 1;
//                 b -= 2;
//             }
//             else
//             {
//                 b += 1;
//                 a -= 2;
//             }
//         }
//     }
//     cout << res << endl;
// }