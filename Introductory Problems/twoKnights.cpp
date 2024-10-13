#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int it = 0;
    for (int n=1; n<=t; n++){
        // cout<<n<<" ";
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
            // if (n-i == 0){

            // }

            // res -= (n-4 >= 0) ? ((n-4)*2)+4 : n;
            // res -= (n > 3) ? 
            // int sum = 0;
            // for (int j=1; j<=n; j++){
            //     sum += (n-i)*n;
            //     sum += (n-j);

            //     if (n-j >= 2 && n-i >= 1){
            //         sum--;
            //     }
            //     if (n-j >= 1 && n-i >= 2){
            //         sum--;
            //     }
            //     if (j >= 2 && n-i >= 1){
            //         sum--;
            //     }
            //     if (j >= 1 && n-i >= 2){
            //         sum--;
            //     }
            // }
            // res += sum;
        }
        cout<<res<<endl;
        if (it == 0) it = 1;
        else it+=2;
    }
    // right mein +2 && down mein +1 - 1
    // down mein +2 && right mein +1 or left mein +1 - 1


    // - - -
    // - - -
    // - - -
    //

    // 6+6+6+6+8+6+6+6
    // 6+5+4+3+2+1+
    // 6+5+4 + 4+4+2 + 2+1+0

    // 28

    // 4*7 = 28

    // - - - =
    // - = - -
    // = - = =
    // = = = -
    // 7*12 = 84
    // 8*4 = 16

    // = - = -
    // - - = =
    // = = - -
    // - = - =

    // -
    return 0;
}