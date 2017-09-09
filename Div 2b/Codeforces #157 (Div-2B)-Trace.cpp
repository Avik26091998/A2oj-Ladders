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
	
	ll n,a[MAX],i,area=0;
	cin>>n;
	a[n]=0;
	for(i=0;i<n;++i) cin>>a[i];
	sort(a,a+n,greater<ll>());
    for(i=0;i<n;++i) {if(i%2==0) area+=(a[i]*a[i])-(a[i+1]*a[i+1]);}
    cout<<area*3.141592653<<"\n";
    return 0;
    
}