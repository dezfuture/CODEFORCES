#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+1];
		int i, sum = 0;
		for(i = 1; i <= n;){
			if(k == n || k == 0){
				break;
			}
			if(sum + 1 < i+1 && k > 0){
				a[i] = i;
				sum += i;
				i++;
				k--;
				continue;
			}
			if(sum > i){
				a[i] = -i;
				sum -= i;
				i++;
				if(sum > 0){
					k--;
				}
				continue;
			}
			if(sum + 1 > i+1 && k == 1){
				a[i] = -i;
				i++;
				if(sum-i > 0){
					break;
				}else{
					sum -= i;
					continue;
				}
			}
			if(sum+i > i+1 && k > 1){
				a[i] = i;
				if(sum > 0){
					k--;
				}
				sum += i;
				i++;
			}
		}
		
		
		if(n == k){
			for(int i = 1; i <= n; i++){
				a[i] = i;
			}
		}
		else if(i <= n){
			for(;i <= n; i++){
				a[i] = -i;
			}
		}
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}cout << endl;
	}
}