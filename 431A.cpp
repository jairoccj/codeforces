#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    vector<ll> v(4);
    for(auto &x : v) cin >> x;

    string s; cin >> s;

    ll sol = 0;

    for(auto &x : s){
        ll num = x-1 - '0';
        sol += v[num];
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}