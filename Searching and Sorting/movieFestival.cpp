#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // vector<int> v(n);
    // for (int i=0; i<n; i++) cin>>v[i];

    vector<pair<int, int>> v(n);
    for (int i=0; i<n; i++){
        int s, e;
        cin>>s>>e;

        v[i] = {s, e};
    }

    // sort(v.begin(), v.end());
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    pair<int, int> p = v[0];
    int cnt = 1;
    int ans = 1;

    for (int i=1; i<n; i++){
        if (v[i].first >= p.second){
            cnt++;
            // p = {max(p.first, v[i].first), min(p.second, v[i].second)};
            p = v[i];
            ans = max(ans, cnt);
        }
        else {

            // cnt = 1;
            // p = v[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}