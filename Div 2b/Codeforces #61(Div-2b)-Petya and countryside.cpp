#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int i, n, maxfirst = 0, maxlast = 0, ans = 0,a[100005];
	
	cin >> n;
	for(i = 1; i <=n; ++i) cin >> a[i];
	int val = a[1];
	for(i = 1; i <= n; ++i){
		
	    if(a[i] <= val) {++maxfirst; val = a[i];}	
		else break;
	}
	val = a[n];
	for(i = n; i >= 1; --i){
		
		if(a[i] <= val) {++maxlast; val = a[i];}
		else break;
	}
	for(i = 2; i <= n - 1; ++i){
		
	   int first, last, I, maxmiddle = 0;
	   first = i - 1;
	   last = i + 1;
	   I = i;
	   
	   while(first >= 1 && a[first] <= a[I]){
	   	
	   	 ++maxmiddle;
	   	 I = first;--first;
	  }
	  I = i;
	    while(last <= n && a[last] <= a[I]){
	    	
	    	++maxmiddle;
	    	I = last;++last;
		}
		maxmiddle += 1;
		ans = max(ans, maxmiddle);	
	}
	
	cout << max(max(maxfirst, maxlast), ans) << "\n"; 
	
	return 0;
}