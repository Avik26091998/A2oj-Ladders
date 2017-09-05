#include <bits/stdc++.h>
#define MAX 100001
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll i,p,q,l,r,a[MAX],b[MAX],ans=0,c[MAX],d[MAX],min,max;
	cin>>p>>q>>l>>r;
	ll count[MAX]={0},k,j;
    for(i=1;i<=p;++i) cin>>a[i]>>b[i];
    for(i=1;i<=q;++i) cin>>c[i]>>d[i];
    for(i=1;i<=p;++i)
    {
    	for(j=1;j<=q;++j)
    	{
    		min=a[i]-d[j];
    		max=b[i]-c[j];
    		for(k=min;k<=max;++k) count[k]=1;
    	}
    }
    for(i=l;i<=r;++i) {if(count[i]==1) ++ans;}
    cout<<ans<<"\n";
    return 0;
    }	