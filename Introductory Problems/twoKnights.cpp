#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int it = 0;
    for (int n=1; n<=t; n++){
        long long res = 0;
        for (int i=1; i<=n; i++){
            res += (long long) ((n-i)*n)*n;
            res += (long long) ((n-1)*(n))/2; 

            if (n-i > 1){
                if (n-2 > 0){
                    res -= (((n-2)*2)+2);
                }
                else {
                    res -= n;
                }
            }
            if (n-i > 0){
                if (n-4 >= 0){
                    res -= (((n-4)*2)+4);
                }
                else {
                    res -= (n == 3) ? 2 : 0;
                }
            }
        }
        cout<<res<<endl;
        if (it == 0) it = 1;
        else it+=2;
    }

    return 0;
}