#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <stack>
#define MAX 100001
#define MOD 1000000007
#define ll long long
using namespace std;

int main(){

	ios_base :: sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

	ll d , sum_time , mn[MAX] , mx[MAX] , i , min_sum , max_sum;

	cin >> d >> sum_time;

    for( i = 1 ; i <= d ; ++i ){

    	cin >> mn[i] >> mx[i];

    	min_sum += mn[i];

    	max_sum += mx[i];

    }
    if( sum_time >= min_sum && sum_time <= max_sum ) {

    	cout << "YES\n";

    	for( i = 1 ; i <= d ; ++i ) {

    		int t = min ( mn[i] + sum_time - min_sum , mx[i] );

    		cout << t << " ";

    		sum_time -=  (t - mn[i]);

    	}

    	cout << "\n";

    }
    else cout << "NO\n";

    return 0;
}