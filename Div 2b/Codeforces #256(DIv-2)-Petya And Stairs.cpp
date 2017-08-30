#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define MAX 100009
using namespace std;
int main()
{
	ll  i,n,m,d[MAX];
	cin>>n>>m;
	for(i=0;i<m;++i) cin>>d[i];
	sort(d,d+m);
    for(i=2;i<m;++i) {if(d[i-2]+1==d[i-1]&&d[i-1]+1==d[i]) {cout<<"NO\n";return 0;}}
    if(d[0]==1||d[m-1]==n) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
