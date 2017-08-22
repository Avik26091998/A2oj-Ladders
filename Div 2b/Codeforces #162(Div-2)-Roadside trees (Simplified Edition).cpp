#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,h[100001],i,time=0,pos=0;
    cin>>n;
    for(i=1;i<=n;++i) cin>>h[i];
    for(i=1;i<=n;++i){
    	time+=h[i]-pos;
    	time+=1;
        pos=h[i];
    	if(i!=n) {if(pos>h[i+1]) {time+=pos-h[i+1];pos=h[i+1];}}
        if(i!=n) time+=1;
    }
    cout<<time<<"\n";
    return 0;
}