#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    queue<int> q;
    for (int i=1; i<=n; i++) q.push(i);

    int counter = 1;
    while (n > 0){
        if (counter%2 != 0){
            int num = q.front();
            q.pop();
            q.push(num);
        }
        else {
            cout<<q.front()<<" ";
            q.pop();
            n--;
        }
        counter++;
    }
    cout<<endl;
    return 0;
}