#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000007
     
using namespace std;

int main(){

  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  ll N, x, i;

  stack<ll>st;

  cin >> N;

  for(i = 1; i <= N; ++i) {

    cin >> x;
    while(!st.empty() && st.top() >= i - x) st.pop();
    st.push(i);
  }
  cout << st.size();

   return 0;
}
