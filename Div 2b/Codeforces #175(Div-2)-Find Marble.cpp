#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll i,n,s,t,p[100001],pos,count=0;
    cin>>n>>s>>t;
    for(i=1;i<=n;++i) cin>>p[i];
    while(n--)
    {
    	if(s==t) {pos=s;break;}
    	pos=p[s];
    	s=pos;
    	if(pos!=p[s]) ++count;
    	if(pos==t) break;
    }
    if(pos==t) cout<<count<<"\n";
    else cout<<"-1\n";
    return 0;
}