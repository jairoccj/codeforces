#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    vi v(200);

    for(auto &x : s){
        v[x]++;
    }

    int sol = 0;
    for(auto &x : v){
        if(x%2!=0) sol++;
    }

    if(sol <= k+1) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}