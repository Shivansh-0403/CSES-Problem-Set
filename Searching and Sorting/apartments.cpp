#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> std(n);
    for (int i=0; i<n; i++) cin>>std[i];

    vector<int> apart(m);
    for (int i=0; i<m; i++) cin>>apart[i];

    sort(std.begin(), std.end());
    sort(apart.begin(), apart.end());

    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < n && j < m){
        // cout<<std[i]<<" "<<apart[j]<<endl;
        if (std[i] < apart[j]-k){
            i++;
        }
        else if (std[i] > apart[j]+k){
            j++;
        }
        else {
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}