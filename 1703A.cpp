#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;

        string yes = "YES";
        string sol = "";

        for(auto &x : s){
            sol += toupper(x);
        }

        if(sol == yes){
            cout << "YES\n";
        }else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}