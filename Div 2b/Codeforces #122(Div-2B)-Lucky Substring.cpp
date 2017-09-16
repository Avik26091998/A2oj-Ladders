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

    string s;

    int i, four= 0, seven= 0;

    cin >> s;	

	for(i=0; i<s.length(); ++i) {

		if( s[i] == '4' ) ++four;

		else if( s[i] == '7' ) ++seven; 
	}

	if( four!= 0 || seven != 0){

		if(four >= seven)  cout << "4";

		else cout << "7";
	
	}
	else cout << "-1";

    cout << "\n";

	return 0;
}
