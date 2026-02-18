#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());

    ll q; cin >> q;

    while(q--){
        int num; cin >> num;
        auto it = upper_bound(v.begin(), v.end(), num);
        cout << distance(v.begin(), it) << '\n';
    }
}

signed main(){
    fastio;
    solve();
}