#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<pair<int, int>> v(n);
    for (int i=0; i<n; i++){
        int num;
        cin>>num;
        v[i] = {num, i};
    }

    sort(v.begin(), v.end());

    vector<int> res;
    for (int i=0; i<n; i++){
        int sum = v[i].first;
        int s = i+1;
        int e = n-1;

        while (s < e){
            if (v[s].first+v[e].first < k-sum){
                s++;
            }
            else if (v[s].first+v[e].first > k-sum){
                e--;
            }
            else {
                res = {v[i].second+1, v[s].second+1, v[e].second+1};
                sort(res.begin(), res.end());
                break;
            }
        }
    }

    if (!res.empty()) cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}