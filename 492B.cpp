#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    ll n, l; cin >> n >> l;

    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    double dist_inicio = v[0] - 0;
    double dist_fim = l - v[n-1];

    double dist_entre = 0;
    for(ll i=0; i<n-1; i++){
        if(v[i+1] - v[i] > dist_entre) dist_entre = v[i+1] - v[i];
    }

    double sol = max(dist_entre / 2, max(dist_fim, dist_inicio));

    cout << fixed << setprecision(10) << sol << '\n';
}

signed main(){
    fastio;
    solve();
}