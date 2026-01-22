#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        char c; cin >> c;

        string s = "codeforces";

        bool flag = false;
        for(auto &x : s){
            if(x == c){
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if(flag == false) cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}