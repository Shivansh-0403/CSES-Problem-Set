#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    multiset<int> tickets;
    for (int i=0; i<n; i++){
        int ticket;
        cin>>ticket;
        tickets.insert(ticket);
    }

    // for (auto i:tickets) cout<<i<<" ";
    // cout<<endl;

    for (int i=0; i<m; i++){
        int num;
        cin>>num;

        // cout<<*(lower_bound(tickets.begin(), tickets.end(), num))<<endl;
        // cout<<num<<endl;
        // cout<<*(tickets.lower_bound(num))<<endl;

        auto ub = tickets.lower_bound(num);
        if (ub != tickets.begin()){
            if (*ub != num){
                ub--;
            }
            cout<<*ub<<endl;
            tickets.erase(ub);
        }
        else {
            if (*ub == num){
                cout<<*ub<<endl;
                tickets.erase(ub);
            }
            else {
                cout<<-1<<endl;
            }
        }
    }

    // sort(tickets.begin(), tickets.end());

    // vector<pair<int, int>> cust;
    // for (int i=0; i<m; i++){
    //     int num;
    //     cin>>num;

    //     cust.push_back({num, i});
    // }

    // sort(cust.begin(), cust.end());

    // int i = 0;
    // int j = 0;
    // vector<int> ans(m);
    // while (i < n && j < m){
    //     if (cust[j].first <= tickets[i]){
    //         ans[cust[j].second] = tickets[i];
    //         i++;
    //         j++;
    //     }
    //     else {
    //         ans[cust[j].second] = -1;
    //         i++;
    //     }
    // }

    // for (int i=0; i<m; i++) cout<<ans[i]<<endl;
    // cout<<endl;

    // vector<int> vis(n, false);
    // for (int i = 0; i < m; i++){
    //     int s = 0;
    //     int e = n - 1;
    //     int mid = (s + e) / 2;
    //     int ans = -1;
    //     while (s <= e)
    //     {
    //         if (tickets[mid] <= cust[i])
    //         {
    //             if (!vis[mid])
    //             {
    //                 ans = mid;
    //             }
    //             s = mid + 1;
    //         }
    //         else
    //         {
    //             e = mid - 1;
    //         }

    //         mid = (s + e) / 2;
    //     }
    //     if (ans != -1)
    //     {
    //         vis[ans] = true;
    //         cout << tickets[ans] << endl;
    //         // return 0;
    //     }
    //     else
    //     {

    //         s = 0;
    //         e = n - 1;
    //         mid = (s + e) / 2;
    //         ans = -1;
    //         while (s <= e)
    //         {
    //             if (tickets[mid] <= cust[i])
    //             {
    //                 if (!vis[mid])
    //                 {
    //                     ans = mid;
    //                 }
    //                 // s = mid+1;
    //                 e = mid - 1;
    //             }
    //             else
    //             {
    //                 e = mid - 1;
    //             }

    //             mid = (s + e) / 2;
    //         }

    //         cout << (ans != -1 ? tickets[ans] : -1) << endl;
    //     }
    // }
    return 0;
}