#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n, m; cin >> n >> m;

    vector<int> v(m);

    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    int sol = 1000000;

    int l = 0, r = n - 1;

    while(r<m){
        sol = min(v[r] - v[l], sol);
        l++, r++;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}