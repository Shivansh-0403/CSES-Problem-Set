#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.length();

    s += '/';

    int ans = 0;
    int cnt = 0;
    for (int i=0; i<n; i++){
        if (s[i] == s[i+1]){
            cnt++;
        }
        else {
            ans = max(ans, cnt+1);
            cnt = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}