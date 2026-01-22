#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        vector<int> v2 = v;
        sort(v2.begin(), v2.end());

        for(int i=0; i<n; i++){
            if(v[i] != v2[1]){
                cout << i + 1 << '\n';
            }
        }
    }
}

signed main(){
    fastio;
    solve();
}