#include <bits/stdc++.h>
#define MAX 100001
#define MOD 1000000007
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n,m,a[MAX],b[MAX],count=0,i,j;
	cin>>n>>m;
	for(i=0;i<n;++i) cin>>a[i];
	for(i=0;i<m;++i) cin>>b[i];
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(b[j]!=-1){
			if(b[j]>=a[i]) {b[j]=-1;++count;break;}
		  }
		}
	}
	cout<<n-count<<"\n";
	return 0;	
}