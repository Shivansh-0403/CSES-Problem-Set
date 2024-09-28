#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, tgt;
    cin>>n>>tgt;

    vector<pair<int, int>> v(n);
    for (int i=0; i<n; i++){
        int ele;
        cin>>ele;

        v[i] = {ele, i};
    }

    sort(v.begin(), v.end());

    int i = 0;
    int j = n-1;
    pair<int, int> p = {-1, -1};
    while (i < j){
        if (v[i].first + v[j].first > tgt){
            j--;
        }
        else if (v[i].first + v[j].first < tgt){
            i++;
        }
        else {
            p.first = min(v[i].second+1, v[j].second+1);
            p.second = max(v[i].second+1, v[j].second+1);
            break;
        }
    }
    if (p.first == -1) cout<<"IMPOSSIBLE"<<endl;
    else cout<<p.first<<" "<<p.second<<endl;
    return 0;
}