#include <bits/stdc++.h>
#define MOD 1000000000
#define ll long long
#define MAX 100000
using namespace std;



int gcd(int x, int y){

  if(y == 0) return x;
  
  gcd(y, x % y);

}

int main() {
  
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int a, b, c, d, num, deno, div;

  cin >> a >> b >> c >> d;

  if(a * d <= b * c){

     num = (b * c) - (a * d);

     deno = b * c;

     if(deno > num) div = gcd(deno, num);
     else div = gcd(num, deno);
   
   }
  else if(a * d > b * c){

     num = (a * d) - (b * c);

     deno = a * d;

     if(deno > num) div = gcd(deno, num);
     else div = gcd(num, deno);
   }

   cout << num / div <<"/"<<deno / div;
   
   return 0;

 }
