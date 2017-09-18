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
#define MOD 1000003
#define ll long long
using namespace std;



int main(){

	ios_base :: sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

    map<char, string> map;

    string input, ans;

    ll i, x, len, val=0, pw, j;


    map['>'] = "1000" ; map['<'] = "1001" ; map['+'] = "1010" ; map['-'] = "1011" ; 
    map['.'] = "1100" ; map[','] = "1101" ; map['['] = "1110" ; map[']'] = "1111" ;
    
     cin >> input;

     for(i = 0; i < input.size(); ++i) {
        
         ans += map[input[i]];        
     }

     len = ans.length();

     x = len - 1;

     for(i=len - 1; i >= 0; --i) {

     	pw = 1;

     	for(j = 0; j < x - i; ++j) pw = (pw * 2) % MOD;

     	if(ans[i] == '1') val = (val % MOD + pw % MOD) % MOD;

    }



     cout << val  <<"\n";

     return 0;

     
}