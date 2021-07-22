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
const int N = 1e3 + 2;
const int MAXN = 2e5 + 5;

const int M = 1e9 + 7;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}

void sieve(int n, bool isPrime[])
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int lcm(int a, int b)
{
    int c = __gcd(a, b);
    return (a / c) * b;
}

void solve()
{
    string gate;
    cin >> gate;
    int rail;
    cin >> rail;

    string s1 = "front";
    string s2 = "back";
    if (gate == s1)
    {
        if (rail == 1)
        {
            cout << 'L' << endl;
        }
        else if (rail == 2)
        {
            cout << "R" << endl;
        }
    }
    else if (gate == s2)
    {
        if (rail == 1)
        {
            cout << "R" << endl;
        }
        else if (rail == 2)
        {
            cout << "L" << endl;
        }
    }
}

int32_t main()
{
    fast_io;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// void show_data(bool part)
// {
//     ofstream f("output.txt");
//     if (part)
//         f << "L";
//     else
//         f << "R";
// }

// int main()
// {
//     string party;
//     bool l_r = false;
//     int num;

//     ifstream file("input.txt");
//     file >> party;
//     file >> num;

//     if (party == "front")
//     {
//         if (num == 1)
//             l_r = true;
//     }
//     else
//     {
//         if (num == 2)
//             l_r = true;
//     }

//     show_data(l_r);
// }