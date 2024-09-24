#include<bits/stdc++.h>
using namespace std;

void solve(string &s, set<string> &v, int it, string &str){
    // if (it >= s.length()){
        if (str.length() == s.length()){
            v.insert(str);
            return ;
        }
    // }

    // // Not Pick
    // solve(s, v, it+1, str);
    
    // // Pick
    // solve(s, v, it+1, str+s[it]);

    for (int i=0; i<s.length(); i++){
        if (s[i] != '/'){
            char ch = s[i];
            str += s[i];
            s[i] = '/';
            solve(s, v, i, str);
            str.pop_back();
            s[i] = ch;
        }
    }
}

int main(){
    string s;
    cin>>s;

    // sort(s.begin(), s.end());

    set<string> v;
    string str;
    solve(s, v, 0, str);

    cout<<v.size()<<endl;
    for (auto i:v){
        cout<<i<<endl;
    }
    return 0;
}