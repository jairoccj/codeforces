#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        auto it = find(v.begin(), v.end(), k);
        if(it != v.end()) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}