#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n+1);
    for (int i=0; i<n-1; i++){
        int num;
        cin>>num;

        v[num] = num;
    }

    int ans = -1;
    for (int i=1; i<=n; i++){
        if (v[i] == 0){
            ans = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}