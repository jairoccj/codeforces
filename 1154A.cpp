#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    vector<int> v(4);
    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    int maior = v[3];

    vector<int> sol(3);
    for(int i=0; i<3; i++){
        sol[i] = maior - v[i];
    }

    for(auto &x : sol) cout << x << ' ';
    cout << '\n';
}

signed main(){
    fastio;
    solve();
}