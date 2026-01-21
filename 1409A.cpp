#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        ll a, b; cin >> a >> b;

        ll sol = abs(a-b);
        
        while(sol%10 != 0){
            sol++;
        }

        cout << sol / 10 << '\n';
    }
}

signed main(){
    fastio;
    solve();
}