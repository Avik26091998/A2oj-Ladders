#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <assert.h>
#include <ctime>
#include <bitset>
#include <numeric>
#include <complex>
#include <valarray>
#define MAX 100001
#define MOD 1000000007
#define ll long long
using namespace std;

int main(){

	ios_base :: sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

    ll n, a[MAX], b[MAX], i, chances = 0, sum = 0, count = 0;

    cin >> n;

    for(i=0; i<n; ++i) {

    	cin >> a[i] >> b[i];

    	if(b[i] > 0) { chances += b[i]; sum += a[i] ; a[i] = -1; ++count; }
     }

     if(count > 1) chances -= (count - 1);

    sort(a, a+n, greater<int>());

    if(chances == 0) { cout << a[0] << "\n"; return 0; }

    i = 0;

    while(i < n && i < chances) {

    	if(a[i] != -1) {


            sum += a[i];

    	}

    	++i;
    }

    cout << sum <<"\n";

    return 0;

}