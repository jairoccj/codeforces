#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int t; cin >> t;

    while(t--){
        vector<int> v(3);

        cin >> v[0] >> v[1] >> v[2];

        sort(v.begin(), v.end());

        if(v[1] + v[2] >= 10) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}