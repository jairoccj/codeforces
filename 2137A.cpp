#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int t; cin >> t;

    while(t--){
        ll k, n; cin >> k >> n;
        ll p = pow(2, k);

        cout << n * p << '\n';
    }
}

signed main(){
    fastio;
    solve();
}