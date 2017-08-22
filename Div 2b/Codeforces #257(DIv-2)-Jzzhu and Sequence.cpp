#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll x,y,n,f3,f4,f5,val;
	cin>>x>>y;
	cin>>n;
    f3=y-x;
    f4=f3-y;
    f5=f4-f3;

    if(n%3==0){
    	if((n/3)%2==0) val=f3*(-1);
    	else val=f3;
    }
    else if((n-1)%3==0){
    	if(((n-1)/3)%2==0) val=f4*(-1);
    	else val=f4;
    }
    else{
        if(n%2==0) val=f5*(-1);
        else val=f5;
    }
    cout<<(((val%MOD)+MOD)%MOD)<<"\n";
    return 0;
}