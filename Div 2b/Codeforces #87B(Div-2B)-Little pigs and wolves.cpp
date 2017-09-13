#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <cmath>
#define MAX 100001
#define MOD 1000000007
#define ll long long
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,i,j,count=0;

	cin>>n>>m;

	char grid[n+1][m+1];

	for(i=1;i<=n;++i){
		for(j=1;j<=m;++j){
			cin>>grid[i][j];
		}
	}

    for(i=1;i<=n;++i){
		for(j=1;j<=m;++j){
			if(grid[i][j]=='W')
			{
				if(grid[i-1][j]=='P') {++count;grid[i-1][j]='.';}
				else if(grid[i+1][j]=='P') {++count;grid[i+1][j]='.';}
				else if(grid[i][j-1]=='P') {++count;grid[i][j-1]='.';}
				else if(grid[i][j+1]=='P') {++count;grid[i][j+1]='.';}
			}
		}
	}


	cout<<count<<"\n";


	return 0;
}