#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<int, bool> mp;
    for (int i=0; i<n; i++){
        int num;
        cin>>num;
        mp[num] = true;
    }
    cout<<mp.size()<<endl;
    return 0;
}