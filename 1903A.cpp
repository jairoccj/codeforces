#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

bool cresc(vector<int> v){
    vector<int> ord = v;
    sort(ord.begin(), ord.end());

    if(v == ord) return true;
    return false;
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        if(k >= 2) cout << "YES\n";
        else{
            if(cresc(v)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

signed main(){
    fastio;
    solve();
}