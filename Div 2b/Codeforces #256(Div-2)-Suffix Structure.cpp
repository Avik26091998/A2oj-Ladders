#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s,t;
    int i,j,c1[100001]={0},c2[100001]={0};
    cin>>s>>t;
    int lens=s.length(),lent=t.length();
    for(i=0;i<lens;++i) ++c1[s[i]-'a'];
    for(j=0;j<lent;++j) ++c2[t[j]-'a'];
    for(i=0;i<26;++i) {if(c1[i]<c2[i]) break;}
    if(i<26){
    	cout<<"need tree\n";
    }
    else{
    	for(i=0,j=0;i<lens&&j<lent;++i,++j)
    	{
    		while(i<lens&&s[i]!=t[j]) ++i;
    	}
    	if(j==lent) cout<<"automaton\n";
    	else if(lens==lent) cout<<"array\n";
    	else cout<<"both\n";
        
     }
     return 0;
 }