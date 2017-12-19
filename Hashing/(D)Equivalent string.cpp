#include<bits/stdc++.h>
using namespace std;

string fun(string s){

	int len = s.length();
	if(len % 2 == 1) return s;

	string x = fun(s.substr(0, len / 2));
	string y = fun(s.substr(len / 2, len));

	return min(x, y) + max(x, y);

}

int main(){
	
	string a, b;

	cin >> a >> b;

	a = fun(a);
	b = fun(b);

	if(a == b) cout <<"YES";
	else cout <<"NO";

	return 0;


}
