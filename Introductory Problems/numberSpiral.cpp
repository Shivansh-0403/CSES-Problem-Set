#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        long long x, y;
        cin>>x>>y;

        // even row -> even ka square starting from n,1
        // odd col -> odd ka square starting from 1,n
        // even even - n,1
        // odd odd - 1,n
        // even odd - n,1
        // odd 
        // even - -> n,1
        // odd ->

        // start from n,1
        // if n even -> start from n^2 decrement
        // if n odd -> start from (n-1)^2+1 increment
        // n ke baad gaadi upar mod leni hai

        if (x >= y){
            if (x%2 == 0){
                long long start = x*x;
                long long value = start-y+1;
                cout<<value<<endl;
            }
            else {
                long long start = ((x-1)*(x-1))+1;
                long long value = start+y-1;
                cout<<value<<endl;
            }
        }
        else {
            if (y%2 != 0){
                long long start = y*y;
                long long value = start-x+1;
                cout<<value<<endl;
            }
            else {
                long long start = ((y-1)*(y-1))+1;
                long long value = start+x-1;
                cout<<value<<endl;
            }
        }
    }
    return 0;
}