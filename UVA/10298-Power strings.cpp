#include<bits/stdc++.h>
using namespace std;

int main(){

  char s[1000001];

  while(scanf("%s", s) == 1){

    if(!strcmp(s, ".")) break;

    int len = strlen(s), power;

    for(int i = 1; i <= len; ++i){

      if(len % i == 0)
    {
      bool ans = true;
      power = len / i;

      for(int j = 0; j < i; ++j){
      
              for(int k = j + i; k < len; k += i){
      
                if(s[k] != s[j]){
      
                  ans = false;
                  break;
                } 
              }
            }
        

        if(ans) break;
      }
    }

    cout << power <<"\n";
  }
  return 0;

}