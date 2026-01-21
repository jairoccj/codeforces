#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

bool func(vector<int> v, int n){
    for(int i=0; i<n-1; i++){
        if(v[i]+1 != v[i+1] && v[i] != v[i+1]) return false;
    }
    
    return true;
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        sort(v.begin(), v.end());

        if(func(v, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}