#include <bits/stdc++.h>
#define MOD 1000000000
#define ll long long
#define MAX 100000
using namespace std;



/*int gcd(int x, int y){

  if(y == 0) return x;
  
  gcd(y, x % y);

}*/

int main() {
  
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int d, n, x, i, ans = 0;

  cin >> d >> n;

  for(i = 1;i <= n; ++i){

    cin >> x;

    if(i != n) ans += d - x;
  }

  cout << ans <<"\n";

  return 0;
}
