#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#define ll long long
#define MAX 100000
#define MOD 1000000007
#define INF 0x3f3f3f3f


using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	ll n, k, val = MOD, i, j, a[MAX], pos, sum, index;
	
	cin >> n >> k;
	
	if(k == 1) {cout <<"1";return 0;}
	
	for(i = 1; i <= n; ++i) cin >> a[i];
	
	for(i = 1; i <= k; ++i){
		
		pos = n;sum = 0;
		
		for(j = i; j % n <= pos && a[j%n] !=-1; j += k){
			
			if(j >= n) pos = i;
			
			if( j == n && a[j] !=-1 ) {sum += a[j];a[j] = -1;}
			else if(a[j%n] != -1) {sum += a[j%n];a[j%n] = -1;}
			else break;
		}
		
		if( sum < val) {val = sum; index = i;}
		
	}
	
	cout << index <<"\n";
	
	return 0;
	
}