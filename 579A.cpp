#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll n; cin >> n;

    bitset<128> binario(n);

    string s = binario.to_string();

    ll sol = 0;

    for(auto &x : s) if(x == '1') sol++;

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}