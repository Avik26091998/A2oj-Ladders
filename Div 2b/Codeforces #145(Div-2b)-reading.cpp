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

  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  pair<int, int>p[MAX];

  int i, n, k;

  cin >> n >> k;

  for(i = 0; i < n; ++i){

    p[i].second = i + 1;
    cin >> p[i].first;
  
  }
  sort(p, p + n);

  cout << p[n - k].first <<"\n";

  for(i = n - k; i < n; ++i) cout << p[i].second << " ";

  return 0;

}