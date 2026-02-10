#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    int t; cin >> t;

    while(t--){
        ll c, r, s; cin >> c >> r >> s;
        
        ll n = c + r;

        ll total = (n + s - 1) / s;
        ll colheres_r = (r + s - 1) / s;

        ll maior = max(0LL, total - colheres_r);
        ll menor = max(0LL, total - min(total, r));

        cout << maior << ' ' << menor << '\n';
    }
}

signed main(){
    fastio;
    solve();
}