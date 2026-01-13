#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    vector<int> v(3);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());

    cout << abs(v[0] - v[1]) + abs(v[1] - v[2]) << '\n';
}

signed main(){
    fastio;
    solve();
}