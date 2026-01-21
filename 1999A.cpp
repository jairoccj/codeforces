#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int sol = 0;

        for(auto &x : s) sol += x - '0';

        cout << sol << "\n";
    }
}

signed main(){
    fastio;
    solve();
}