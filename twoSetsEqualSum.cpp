#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long sum = 0;
    for (int i=1; i<=n; i++){
        sum += i;
    }
    // cout<<sum<<endl;
    if (sum%2 != 0){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        long long half = sum/2;

        // long long i = 1;
        // long long j = n;
        // long long cnt1 = 0;
        // while (half-i >= 0){
        //     half -= i;
        //     i++;
        //     cnt1++;
        // }
        // while (half-j >= 0){
        //     half -= j;
        //     cnt1++;
        //     j--;
        // }
        // while (half-i >= 0){
        //     half -= i;
        //     i++;
        //     cnt1++;
        // }

        // 1 3 5 7 - 16 + 4
        // 2 4 6 8 - 20

        // 1 3 5 7 - 16
        // 2 4 6 - 12

        // 1 3 5 7 9 11 - 36
        // 2 4 6 8 10 - 30
        // 

        // long long s1 = 0;
        // long long s2 = 0;

        // // cout<<cnt1<<endl;
        // for (long long it=1; it<i; it++){
        //     // cout<<it<<" ";
        //     s1 += it;
        // }
        // for (long long it=j+1; it<=n; it++){
        //     // cout<<it<<" ";
        //     s1 += it;
        // }
        // // cout<<endl;

        // // cout<<n-cnt1<<endl;
        // for (long long it=i; it<=j; it++){
        //     // cout<<it<<" ";
        //     s2 += it;
        // }
        // // cout<<endl;
        
        // cout<<n<<endl;
        // cout<<sum<<endl;
        // cout<<i<<endl;
        // cout<<half<<endl;
        // cout<<s1<<" "<<s2<<endl;
        // cout<<s1+s2<<endl;

        // vector<int> vo(n+1, -1);
        // vector<int> ve(n+1, -1);

        // long long odd = 0;
        // long long even = 0;
        // for (int i=1; i<=n; i+=2){
        //     vo[i] = i;
        //     odd += i;
        // }
        // for (int i=2; i<=n; i+=2){
        //     ve[i] = i;
        //     even += i;
        // }

        // int diff = abs(even-odd);
        // diff = diff/2;

        // // cout<<diff<<endl;

        // long long temp = 0;
        // int it = 1;
        // while (it <= n){
        //     temp += it;

        //     if (temp-diff >= 0 && ve[temp-diff] != -1){
        //         ve[temp-diff] = -1;
        //         vo[temp-diff] = temp-diff;
        //         vo[it] = -1;
        //         // cout<<it<<endl;
        //         break;
        //     }

        //     it += 2;
        // }

        // for (int i=1; i<=it; i+=2){
        //     vo[i] = -1;
        //     ve[i] = i;
        // }

        // int cnt1 = 0;
        // int cnt2 = 0;
        // for (int i=1; i<=n; i++){
        //     if (vo[i] != -1) cnt1++;
        //     if (ve[i] != -1) cnt2++;
        // }

        // cout<<cnt1<<endl;
        // for (int i=1; i<=n; i++){
        //     if (vo[i] != -1) cout<<i<<" ";
        // }

        // cout<<endl;
        // cout<<cnt2<<endl;
        // for (int i=1; i<=n; i++){
        //     if (ve[i] != -1) cout<<i<<" ";
        // }
        // cout<<endl;


        // 1 11 2 10 9 6 
        // 4 8 5 7 12 3

        // 1 2 3 4 5 6 7 8
        // 7 2 5
        // 1 6 3 4

        vector<int> v1;
        vector<int> v2;
        v1.push_back(n);

        int i = 1;
        int j = n-1;
        bool flag = true;
        while (i < j){
            if (flag){
                v2.push_back(i);
                v2.push_back(j);
            }
            else {
                v1.push_back(i);
                v1.push_back(j);
            }
            i++;
            j--;
            flag = !flag;
        }

        if (i == j){
            int x = i/2;
            bool fnd = false;
            int idx = -1;
            for (int counter=0; counter<v1.size(); counter++){
                if (v1[counter] == x){
                    fnd = true;
                    idx = counter;
                    break;
                }
            }
            if (fnd){
                v1.erase(v1.begin()+idx);
                v2.push_back(x);
                v1.push_back(j);
            }
            else {
                for (int counter=0; counter<v2.size(); counter++){
                    if (v2[counter] == x){
                        fnd = true;
                        idx = counter;
                        break;
                    }
                }
                v2.erase(v2.begin()+idx);
                v1.push_back(x);
                v2.push_back(j);
            }
        }

        cout<<v1.size()<<endl;
        for (int it=0; it<v1.size(); it++) cout<<v1[it]<<" ";
        cout<<endl<<v2.size()<<endl;
        for (int it=0; it<v2.size(); it++) cout<<v2[it]<<" ";
        cout<<endl;
    }
    return 0;
}