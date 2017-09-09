#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#define ll long long
#define MAX 100005
#define MOD 1000000007
using namespace std;
int main() {
	
	ll i,n,len=0,l,ans=0,a[MAX];
	cin>>n;
	for(i=1;i<=n;++i) cin>>a[i];
	for(i=3;i<=n;++i){
	    if(a[i]==a[i-1]+a[i-2]){
	        ++len;
	        if(len>ans) ans=len;
	    }
	    else len=0;
	}
	if(n<2) cout<<"1\n";
	else cout<<ans+2<<"\n";
	return 0;
}