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
	
	ll n,m,a[MAX],i,sum=0;
	cin>>n>>m;
	for(i=0;i<n;++i) cin>>a[i];
	sort(a,a+n);
	for(i=0;i<m;++i) {if(a[i]<0) sum+=abs(a[i]);}
	cout<<sum<<"\n";
	return 0;
}