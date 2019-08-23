//Time complexity - O(n)
//Space Complexity - O(n)

#include<iostream>
using namespace std;
int cost[5] = {1,5,10,20,100};

int fun(int n){

	if(n == 0) return 0;
	for(int i = 4;i >= 0; --i){

		if(cost[i] <= n) return 1 + fun(n - cost[i]);
	}
}

int main(){

	int n;

	cin >> n;

	cout << fun(n);

	return 0;
}