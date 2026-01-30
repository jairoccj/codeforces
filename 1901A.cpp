
#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

int sol(vector<int> &v, int x, int n){
    int sol = v[0];

    for(int i=1; i<n; i++){
        sol = max(sol, v[i] - v[i-1]);
    }

    sol = max(sol, 2 * (x - v[n-1]));

    return sol;
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n, x; cin >> n >> x;

        vector<int> v(x);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        cout << sol(v, x, n) << '\n';
    }
}

signed main(){
    fastio;
    solve();
}