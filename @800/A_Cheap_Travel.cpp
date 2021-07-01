#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(m*a > b){
        int cost = (n%m)*a;
        if(cost > b){
            cout << (n/m)*b + b << endl;
        }else{
            cout << (n/m)*b + cost << endl;
        }
    }else{
        cout << n*a<< endl;
    }
}