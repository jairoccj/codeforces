#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    ll n; cin >> n;
    vll v(n);
    for(auto &x : v) cin >> x;

    ll menor = LLONG_MAX;
    int pos = 0;
    for(int i=0; i<n; i++){
        if(v[i]<menor){
            menor = v[i];
            pos = i;
        }
    }
    v[pos]++;
    ll sol = v[0];

    for(int i=1; i<n; i++){
        sol *= v[i];
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}