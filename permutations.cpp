#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // 4
    // 1 3 2 4
    // 3 1 4 2
    // 1 3 2 4
    
    // 5
    // 5 3 1 4 2
    if (n <= 3 && n > 1) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    int it = n-1;
    while (it > 0){
        cout<<it<<" ";
        it -= 2;
    }
    it = n;
    while (it > 0){
        cout<<it<<" ";
        it -= 2;
    }
    cout<<endl;
    return 0;
}