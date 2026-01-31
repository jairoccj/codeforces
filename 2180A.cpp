#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        int l, a, b; cin >> l >> a >> b;

        int ini = a;
        int sol = a;

        do{
            a = (a+b)%l;
            sol = max(sol, a);
        }while(a != ini);

        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}