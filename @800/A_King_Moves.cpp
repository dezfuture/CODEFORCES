// As we know that the king can only move one unit in any direction we will check whether
// the nearby positions are free or hindered.
// Once we know about the neighbouring conditions of the king's position, we could 
// accordingly solve the problem

// Include library
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

signed main()
{
    char x, y;
     cin >> x >> y;  
    int count = 0;
    if (x == 'a' || x == 'h')
    {
        count++;
    }
    if (y == '1' || y == '8')
    {
        count++;
    }

    if (count == 0)
    {
        cout << 8 << endl;
    }
    else if (count == 1) //if king is adjacent to one of the boundary 
    {
        cout << 5 << endl;
    }
    else if (count == 2) //if king is on the corner point of the chessboard
    {
        cout << 3 << endl;
    }
    return 0;
}
