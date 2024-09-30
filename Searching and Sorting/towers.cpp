#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    multiset<int> st;
    for (int i=0; i<n; i++){
        // lower bound
        // equal or just higher

        auto it = st.upper_bound(v[i]);
        // cout<<*it<<endl;
        if (it == st.end()){
            // cout<<1<<endl;trafficLights
            st.insert(v[i]);
        }
        else {
            // if (){
                st.erase(it);
                st.insert(v[i]);
            // }
            // else {

            // }
        }
    }
    cout<<st.size()<<endl;
    return 0;
}