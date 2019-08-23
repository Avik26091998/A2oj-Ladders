    //Time complexity - O(1)
    //Space Complexity - O(1)
     
    #include<iostream>
    using namespace std;
    int main(){

        int n, ans = 1, dp[100001];
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> a[i], dp[i] = 1;

        for(int i = 2;i <= n; ++i){

            if(a[i] > a[i - 1]) dp[i] += dp[i - 1];
            ans = max(ans, dp[i]);
        }
        cout << ans;

    }