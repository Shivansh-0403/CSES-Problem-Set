#include<bits/stdc++.h>
using namespace std;

int main(){
    // 4 3
    // 2 2
    // 3 1

    // 5 5
    // 3 4
    // 1 3
    // 2 2
    

    // 6 6
    // 5 4
    // 4 2
    // 2 1

    // 3 3
    // 1 2


    // 3 5
    // 2 3
    // 

    // %0 %0 - yes
    // 

    int t;
    cin>>t;

    while (t--){
        int a, b;
        cin>>a>>b;

        if ((a == 0 && b != 0) || (a != 0 && b == 0)){
            cout<<"NO"<<endl;
        }
        else if (b > a*2 || a > b*2){
            cout<<"NO"<<endl;
        }
        else if ((a%3 + b%3)%3 == 0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}