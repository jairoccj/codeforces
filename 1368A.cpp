#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    ll a, b, n; cin >> a >> b >> n;

    ll sol = 0;

    while(a<=n && b<=n){
        if(a<=b || a+b>n) a += b;
        else b += a;
        sol++;
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