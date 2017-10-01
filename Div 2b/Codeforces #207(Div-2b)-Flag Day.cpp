#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	ll i, n, m, x1, x2, x3, a[100005], occur[100005] = {0} , colr[100005] = {0};
	
	cin >> n >> m;
	
	for(i = 1; i <= m; ++i) {
	
	 cin >> x1 >> x2 >> x3;
	
	 if(occur[x1] != 1){
	 	
         if(occur[x2] != 1 && occur[x3] != 1) colr[x1] = 1;
		 else{
		 	
		 	if(occur[x2] && occur[x3] != 1){
		 		
		 		if(colr[x2] == 1) colr[x1] = 3;
		 		else if(colr[x2] == 2) colr[x1] = 1;
		 		else colr[x1] = 2;
			 }
		 	 else if(occur[x2] != 1 && occur[x3]){
		 	 	
		 	 	if(colr[x3] == 1) colr[x1] = 3;
		 		else if(colr[x3] == 2) colr[x1] = 1;
		 	 	else colr[x1] = 2;
		 	 }
		 	else {
		 		if(colr[x2] == 1 && colr[x3] == 2 || colr[x2] == 2 && colr[x3] == 1) colr[x1] = 3;
		 		else if(colr[x2] == 1 && colr[x3] == 3 || colr[x2] == 3 && colr[x3] == 1) colr[x1] = 2;
			    else colr[x1] = 1;
			 }
		 }
		 occur[x1] = 1;	 	
	 }	
      if(occur[x2] != 1){
     	
     	if(occur[x1] != 1 && occur[x3] != 1) colr[x1] = 2;
     	else{
     		
     		if(occur[x1] && occur[x3] != 1){
		 		
		 		if(colr[x1] == 1) colr[x2] = 3;
		 		else if(colr[x1] == 2) colr[x2] = 1;
		 		else colr[x2] = 2;
			 }
     		
     		else if(occur[x1] != 1 && occur[x3]){
     			
     			if(colr[x3] == 1) colr[x2] = 3;
		 		else if(colr[x3] == 2) colr[x2] = 1;
		 	 	else colr[x2] = 2;
     			
			 }
     		else{
     			
     			if(colr[x1] == 1 && colr[x3] == 2 || colr[x1] == 2 && colr[x3] == 1) colr[x2] = 3;
		 		else if(colr[x1] == 1 && colr[x3] == 3 || colr[x1] == 3 && colr[x3] == 1) colr[x2] = 2;
			    else colr[x2] = 1;
     			
			 }
     	}
     	occur[x2] = 1;
    }
     if(occur[x3] != 1){
    	
    	if(occur[x1] != 1 && occur[x2] != 1) colr[x3] = 3;
    	else{
    		
    		if(occur[x1] && occur[x2] != 1){
		 		
		 		if(colr[x1] == 1) colr[x3] = 3;
		 		else if(colr[x1] == 2) colr[x3] = 1;
		 		else colr[x3] = 2;
			 }
    		else if(occur[x1] != 1 && occur[x2]){
    			
    			if(colr[x2] == 1) colr[x3] = 3;
		 		else if(colr[x2] == 2) colr[x3] = 1;
		 		else colr[x3] = 2;
    			
			}
			else{
				
				if(colr[x1] == 1 && colr[x2] == 2 || colr[x1] == 2 && colr[x2] == 1) colr[x3] = 3;
		 		else if(colr[x1] == 1 && colr[x2] == 3 || colr[x1] == 3 && colr[x2] == 1) colr[x3] = 2;
			    else colr[x3] = 1;
			}
    		
    	}
    	occur[x3] = 1;
    	
    }
 }
  
   for(i = 1; i <= n; ++i) cout << colr[i] <<" ";
   cout << "\n";
  
   return 0;
}