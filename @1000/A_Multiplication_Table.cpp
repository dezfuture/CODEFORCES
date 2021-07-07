#include <iostream>
using namespace std;

int main()
{
    int n, x, c(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        if (x % i == 0 and x / i <= n)
        {
            // cout << i << endl;
            c++;
        }

    cout << c << endl;
    return 0;
}