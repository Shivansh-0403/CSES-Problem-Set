#include<bits/stdc++.h>
using namespace std;

long long solve(vector<int> &v, int n, long long total, int it, long long sum){
    if (it >= n){
        return abs((total-sum)-sum);
    }

    // Pick
    long long ans = solve(v, n, total, it+1, sum+v[it]);

    ans = min(ans, solve(v, n, total, it+1, sum));

    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    long long sum = 0;
    for (int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }

    cout<<solve(v, n, sum, 0, 0)<<endl;
    return 0;
}