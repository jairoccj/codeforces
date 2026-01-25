#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        int n, s, x; cin >> n >> s >> x;

        int sol = 0;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            sol += num;
        }

        while(sol < s){
            sol += x;
        }

        if(sol == s) cout << "YES\n";
        else cout << "NO\n";
    }

}

signed main(){
    fastio;
    solve();
}