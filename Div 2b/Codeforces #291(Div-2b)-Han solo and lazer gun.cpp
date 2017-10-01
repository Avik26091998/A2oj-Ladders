#include <iostream>

using namespace std;

int main() {
	
	int n, x0, y0, i, j, dx1, dx2, dy1, dy2, count = 0;
	
	cin >> n >> x0 >> y0;
	
	int k[n+1] = {0}, x[n+1], y[n+1];
	
	for(i = 1; i <= n; ++i) cin >> x[i] >> y[i];
	
	for(i = 1; i <= n; ++i){
		
		if(k[i]) continue;
		
		++count;
		
		int dx1 = x[i] - x0, dy1 = y[i] - y0;
		
		for(j = 1; j <= n; ++j){
			
			int dx2 = x[j] - x0, dy2 = y[j] - y0; 
			
			if(dx2 * dy1 == dx1 * dy2) k[j] = 1;
			
		}	
		
	}
	
	cout << count <<"\n";
	
	return 0;
	
}