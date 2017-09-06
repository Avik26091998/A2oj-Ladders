#include <bits/stdc++.h>
#define MAX 100001
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n,k,a[MAX],diff,i,j,mn=MAX,mx=0;
	cin>>n>>k;
	for(i=1;i<=n;++i)
	{
		cin>>a[i];
		mn=min(a[i],mn);
		mx=max(a[i],mx);
	}
	if(mx-mn>k) {cout<<"NO\n";return 0;}
	cout<<"YES\n";
	for(i=1;i<=n;++i)
	{
		for(j=0;j<a[i];++j)
			cout<<1+(j%k)<<" ";
		cout<<"\n";
	}

	return 0;
}