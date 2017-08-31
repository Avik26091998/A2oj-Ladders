#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define MAX 100009
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll i,n,t,a[MAX],ptr1,books=0,sum=0,count=0;
	cin>>n>>t;
	for(i=1;i<=n;++i) cin>>a[i];
	ptr1=1;
    for(i=1;i<=n;++i){
    	sum+=a[i];
    	++count;
    	while(sum>t){
    		--count;
    		sum-=a[ptr1];
    		++ptr1;
    	}
    	books=max(count,books);
    }
    cout<<books<<"\n";
    return 0;
}