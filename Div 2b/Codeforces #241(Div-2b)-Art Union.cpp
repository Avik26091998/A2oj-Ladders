#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int n, m, a[6] = {0}, num;
	
	cin >> m >> n;
	
	for(int i = 1; i <= m; ++i){
		
		for(int j = 1; j <= n; ++j){
			
			cin >> num;
			a[j] = max(a[j - 1], a[j]) + num;
		}
		
		cout << a[n] <<" ";
	}
	
	return 0;
}