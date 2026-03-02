#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    ll n; cin >> n;

    map<ll, ll> m;
    bool sol = true;

    while(n--){
        ll num; cin >> num;
        if(m[num] > 0){
            sol = false;
        }
        m[num]++;
    }

    cout << (sol ? "YES\n" : "NO\n");
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}