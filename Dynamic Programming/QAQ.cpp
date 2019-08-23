    //Time complexity - O(n)
    //Space Complexity - O(1)
     
    #include<iostream>
    using namespace std;
     
     
    int main(){
     
    	string s;
    	cin >> s;
     
    	int q1=0,q2=0,res=0;
     
    	int len = s.length(), count = 0;
     
    	for(int i = 0; i < len; ++i){
     
    		if(s[i] == 'Q') ++q1;
    	}
     
    	for(int i = 0; i < len; ++i){
     
    		if(s[i] == 'Q') --q1,++q2;
    		if(s[i] == 'A') res += q1*q2;
    	}
     
    	cout << res;
     
    	return 0;
    }