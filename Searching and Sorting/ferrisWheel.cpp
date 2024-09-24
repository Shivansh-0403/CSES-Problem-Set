#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w;
    cin>>n>>w;

    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int i = 0;
    int j = n-1;
    int ans = 0;
    while (i <= j){
        if (v[i]+v[j] <= w || i == j){
            i++;
            j--;
            ans++;
        }
        else {
            j--;
            ans++;
        }
    }
    // 5 5 6 6 7 8 9 9 10 10
    // 1+1+1+1+1+1+1+1+1
    cout<<ans<<endl;
    return 0;
}