#include <bits/stdc++.h>

using namespace std;

int main() {
	
	pair<int, int>p[5000];
	int i, j, n, m, num = 1, ans = 0;
	
	cin >> n >> m;
	
	
	for(i = 1; i <= m; ++i){
		
		cin >> p[i].first >> p[i].second;
	}
	
	while(num){
		
		num = 0; 
		int count[100001] = {0}, mx = 0;
		
		for(i = 1; i <= m; ++i){
			
			if(p[i].first != -1 && p[i].second != -1){
				
				 ++count[p[i].first]; ++count[p[i].second];
				 if(p[i].first > mx) mx = p[i].first;
		 
		 if(p[i].second > mx) mx = p[i].second;
				
		 }
		
	   }
	   
	   for(i = 1; i <= mx; ++i) {
		
		if(count[i]  ==  1){
			
			for(j = 1; j <= m; ++j) {
				
				if(p[j].first == i || p[j].second == i){
					
					p[j].first = -1; p[j].second = -1; ++num; break;
				
				}
				
			}
		}
	 }if(num) ans += 1;
	 
		
	}

	cout << ans <<"\n";
	return 0;
	
}