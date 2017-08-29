#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define MAX 100009
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll m,n,a[101][101],b[101][101]={0},i,j;
    cin>>m>>n;
    for(i=1;i<=m;++i){
    	for(j=1;j<=n;++j) a[i][j]=1;
    }
    for(i=1;i<=m;++i){
    	for(j=1;j<=n;++j){
    		cin>>b[i][j];
    		if(b[i][j]==0){
    			for(ll x=1;x<=n;++x) a[i][x]=0;
    			for(ll y=1;y<=m;++y) a[y][j]=0;
    		}
    	}
    }
    for(i=1;i<=m;++i){
    	for(j=1;j<=n;++j){
    		if(b[i][j]==1){
    			int flag=0;
    			for(ll x=1;x<=n;++x) if(a[i][x]==1) {flag=1;}
    			for(ll y=1;y<=m;++y) if(a[y][j]==1) {flag=1;}
    			if(flag==0) {cout<<"NO\n";return 0;}
    		}
    	}
    }
    cout<<"YES\n";
    for(i=1;i<=m;++i){
    	for(j=1;j<=n;++j) cout<<a[i][j]<<" ";
    	cout<<"\n";
    }
    return 0;
}