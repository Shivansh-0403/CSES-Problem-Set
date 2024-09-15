#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long sum = (n*(n+1))/2;
    if (sum%2 != 0){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        long long half = sum/2;

        long long i = 1;
        long long j = n;
        long long cnt1 = 0;
        while (half-i >= 0){
            half -= i;
            i++;
            cnt1++;
        }
        while (half-j >= 0){
            half -= j;
            cnt1++;
            j--;
        }
        while (half-i >= 0){
            half -= i;
            i++;
            cnt1++;
        }

        long long s1 = 0;
        long long s2 = 0;

        // cout<<cnt1<<endl;
        for (long long it=1; it<i; it++){
            // cout<<it<<" ";
            s1 += it;
        }
        for (long long it=j+1; it<=n; it++){
            // cout<<it<<" ";
            s1 += it;
        }
        // cout<<endl;

        // cout<<n-cnt1<<endl;
        for (long long it=i; it<=j; it++){
            // cout<<it<<" ";
            s2 += it;
        }
        // cout<<endl;
        
        cout<<n<<endl;
        cout<<sum<<endl;
        cout<<i<<endl;
        cout<<half<<endl;
        cout<<s1<<" "<<s2<<endl;
        cout<<s1+s2<<endl;
    }
    return 0;
}

// 7 2 3
// 6 1 5