#include<bits/stdc++.h>
using namespace std;

int solve(int n, int sum, vector<int> &dp){
    if (sum == n) return 1;
    else if (sum > n) return 0;

    if (dp[sum] != -1) return dp[sum];

    int ans = 0;
    for (int i=1; i<=6; i++){
        ans = (ans + solve(n, sum+i, dp))%1000000007;
    }
    return dp[sum] = ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1, -1);
    cout<<solve(n, 0, dp)<<endl;
    return 0;
}