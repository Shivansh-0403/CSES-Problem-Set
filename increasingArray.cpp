#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int last = -1;
    long long ans = 0;
    for (int i=0; i<n; i++){
        int num;
        cin>>num;

        if (num < last){
            ans += (last-num);
        }
        else {
            last = num;
        }
    }

    cout<<ans<<endl;
    return 0;
}