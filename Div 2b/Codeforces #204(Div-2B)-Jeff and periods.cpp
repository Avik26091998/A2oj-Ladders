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

    ll n, a[MAX], i, diff[MAX] = {0}, cd[MAX] = {0}, dup[MAX], arr[MAX];

    cin >> n;

    for(i = 1; i <= n; ++i) cin >> a[i]; 
    
    for(i = 1; i <= n; ++i) {

    if(cd[a[i]] != -1) {

    	if(diff[a[i]] >= 1) {

          if(cd[a[i]] == 0) { cd[a[i]] = i - diff[a[i]]; diff[a[i]] = i ; }

          else if(cd[a[i]] == i - diff[a[i]]) { diff[a[i]] = i; continue; }

          else cd[a[i]] = -1;


          arr[a[i]] = cd[a[i]];

       }

       else diff[a[i]] = i;

    }
       
    }

    ll c = 0;

    for(i=0; i<n; ++i) { dup[i] = a[i+1]; }


    sort(dup , dup+n);

  for(i=0; i<n; ++i) {

    	if(arr[dup[i]] != -1 ) {++c; arr[dup[i]] = -1; }

    }

    cout << c << "\n";

    for(i=0; i<n; ++i) {

    	if(cd[dup[i]] != -1 ) {cout << dup[i] << " " << cd[dup[i]] << "\n"; cd[dup[i]] = -1; }

    }

    return 0;
} 