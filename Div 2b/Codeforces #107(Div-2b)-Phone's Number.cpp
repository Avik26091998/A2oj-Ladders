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

  /*freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);*/
  
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int n, ii, i, j, s, aa[101], bb[101], cc[101];

  pair<int, string> taxi[101];
  pair<int, string> pizza[101];
  pair<int, string> girl[101];

  string name, number;

  cin >> n;

  for(ii = 0; ii < n; ++ii){

    taxi[ii].first = pizza[ii].first = taxi[ii].first = 0;
    cin >> s >> name;

  for(i = 1; i <= s; ++i){

    cin >> number;

    char ch = number[7]; int count1 = 0, count2 = 0;

    for(j = 6; j >= 0; --j){

      if(number[j] != '-'){

        if(number[j] == ch) ++count1;

        else if(number[j] > ch){ch = number[j]; ++count2;}

        else { break;}

     }

    }

    if(count1 == 5)  ++taxi[ii].first;

    else if(count2 == 5) ++pizza[ii].first;

    else ++girl[ii].first; 

   }
   aa[ii] = taxi[ii].first; bb[ii] = pizza[ii].first; cc[ii] = girl[ii].first;
   taxi[ii].second = pizza[ii].second = girl[ii].second = name;
 }

  sort(aa, aa + n);
  sort(bb, bb + n);
  sort(cc, cc + n);
  
  int flag = 0;
  cout << "If you want to call a taxi, you should call: ";
  for(j = 0; j < n; ++j){

    if(taxi[j].first == aa[n - 1]){
      if(flag == 1) cout <<", ";
      cout << taxi[j].second;
      flag = 1;
    }
    
  }cout <<".";

  cout << "\n";

  flag = 0;
  cout << "If you want to order a pizza, you should call: ";
  for(j = 0; j < n; ++j){

    if(pizza[j].first == bb[n - 1]){
      if(flag == 1) cout <<", ";
      cout << pizza[j].second;
     flag = 1;
    }
    
  }cout <<".";

  cout << "\n";  

  flag =  0;
  cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
  for(j = 0; j < n; ++j){

    if(girl[j].first == cc[n - 1]){
      if(flag == 1) cout <<", ";
      cout << girl[j].second;
      flag = 1;
    }
    
  }cout <<".";

  cout << "\n";
  return 0;

}