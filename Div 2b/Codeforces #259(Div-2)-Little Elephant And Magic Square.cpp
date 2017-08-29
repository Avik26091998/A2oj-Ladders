#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define MAX 100009
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a[100][100],i,k,N;
    for(i=1;i<=3;++i)
    {
    	for(k=1;k<=3;++k)
    		cin>>a[i][k];
    }
    N=(a[1][2]+a[1][3]+a[2][1]+a[2][3]+a[3][1]+a[3][2])/2;
    a[1][1]=N-(a[1][2]+a[1][3]);
    a[2][2]=N-(a[2][1]+a[2][3]);
    a[3][3]=N-(a[3][1]+a[3][2]);    
    for(i=1;i<=3;++i)
    {
    	for(k=1;k<=3;++k)
    		cout<<a[i][k]<<" ";
    	cout<<"\n";
    }
    return 0;
}