//Time complexity - O(n)
//Space Complexity - O(n)

#include<iostream>
using namespace std;
int dp[40000];

int main(){

	int n, a[3];

	cin >> n >> a[0] >> a[1] >> a[2] >> a[3];

	for(int i = 1;i <= n; ++i){

		for(int j = 1; j < 3; ++j){

			if(a[j] <= i) dp[i] = max(dp[i], 1 + dp[i - j]);
		}
	}

	cout << dp[n];

	return 0;
}