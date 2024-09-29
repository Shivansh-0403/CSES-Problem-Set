#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int, int>> v;
    for (int i=0; i<n; i++){
        int ele;
        cin>>ele;

        v.push_back({ele, i});
    }

    sort(v.begin(), v.end());
    v.push_back({6, -1}); // helps in adding 1 for the last round

    int ans = 0;
    pair<int, int> p = v[0];
    for (int i=1; i<=n; i++){
        if (v[i].second < p.second){
            ans++;
        }
        p = v[i];
    }

    cout<<ans<<endl;
    return 0;
}