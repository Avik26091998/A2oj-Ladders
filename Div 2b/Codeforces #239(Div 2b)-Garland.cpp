#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string s, g;
	
	char ch;
	
	int i, ans = 0;
	
	map<char, int> mp, dup;
	
	cin >> s >> g;
	
	for(i = 0; i < s.length(); ++i){
		
        ++mp[s[i]];	    	
	}
	for(i = 0; i < g.length(); ++i){
		
        ++dup[g[i]];	    	
	}
	for(ch = 'a'; ch <= 'z'; ++ch){
		
		if(mp[ch] == 0 && dup[ch] > 0) {cout <<"-1\n";return 0;}
		
		else if(mp[ch] > 0 && dup[ch] > 0) ans += min(mp[ch], dup[ch]);
	}
	
	cout << ans <<"\n";
	
	return 0;
}