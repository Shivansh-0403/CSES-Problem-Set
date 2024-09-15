#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    int it = n;
    while(it > 1){
        ans += (it/5);
        it = it/5;
    }

    cout<<ans<<endl;
    return 0;
}