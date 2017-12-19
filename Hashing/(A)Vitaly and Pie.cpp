#include<bits/stdc++.h>
using namespace std;

int main(){

	int len, key = 0, n;
	string s;
	map<char, int>mp;
	map<char, int>::iterator it;

	cin >> n;
	cin >> s;

	len = s.length();

	for(int i = 0; i < len; ++i){

		if(i % 2 == 0) mp[s[i]] += 1;
		else{

			if(mp[tolower(s[i])]) mp[tolower(s[i])] -= 1;
			else ++key;
		}
	}
	
	cout << key;


   return 0;
}
