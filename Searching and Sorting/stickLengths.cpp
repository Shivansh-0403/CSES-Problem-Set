#include<bits/stdc++.h>
using namespace std;

long long solve(vector<long long> v, long long n, long long avg){
    long long total = 0;
    for (auto i:v){
        total += abs(avg-i);
    }
    return total;
}

// 1 4 5 100 100

int main(){
    long long n;
    cin >> n;

    vector<long long> v(n);
    long long sum = 0;
    for (int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    long long avg = sum/n;

    // long long res = LLONG_MAX;

    long long res = solve(v, n, avg);
    // res = min(res, solve(v, n, avg+1));
    // res = min(res, solve(v, n, avg-1));

    // cout<<res<<" "<<sum<<" "<<avg<<endl;

    // res = min(res, solve(v, n, v[n/2]));
    // res = min(res, solve(v, n, v[(n+1)/2]));
    // res = min(res, solve(v, n, v[(n-1)/2]));

    if (n%2 == 0){
        res = min(res, solve(v, n, (long long) (v[(n-1)/2]+v[n/2])/2));
    }
    else {
        res = min(res, solve(v, n, v[n/2]));
    }

    // map<int, int> mp;
    // int ele = -1;
    // int freq = 0;
    // for (int i=0; i<n; i++){
    //     mp[v[i]]++;

    //     if (mp[v[i]] > freq){
    //         freq = mp[v[i]];
    //         ele = v[i];
    //     }
    // }

    // res = min(res, solve(v, n, ele));
    cout<<res<<endl;
    return 0;
}