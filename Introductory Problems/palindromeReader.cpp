#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int> v(26);
    for (auto i:s) v[i-'A']++;

    int cnt = 0;
    for (auto i:v){
        if (i%2 != 0) cnt++;
    }

    if (cnt > 1){
        cout<<"NO SOLUTION"<<endl;
    }
    else {
        string s1, s2;
        char c = '/';
        for (int i=0; i<26; i++){
            int temp = v[i]/2;
            string temp_str(temp, 'A'+i);

            s1 = s1 + temp_str;
            s2 = temp_str + s2;

            if (v[i]%2 != 0){
                c = 'A'+i;
            }
        }
        // s1 += c == '/' ? '' : c;
        if (c != '/') s1 += c;
        s1 = s1+s2;
        cout<<s1<<endl;
    }
    return 0;
}