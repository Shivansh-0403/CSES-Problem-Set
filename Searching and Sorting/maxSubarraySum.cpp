#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    long long ans = LLONG_MIN;
    long long sum = 0;

    for (int i=0; i<n; i++){
        sum += v[i];

        ans = max(ans, sum);

        if (sum < 0){
            sum = 0;
        }
    }

    cout<<ans<<endl;
    return 0;
}