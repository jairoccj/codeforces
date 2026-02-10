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
        ll n, q; cin >> n >> q;

        vector<ll> v(n);
        for(auto &x : v) cin >> x;

        for(int i=0; i<n; i++){
            ll num; cin >> num;
            if(num > v[i]) v[i] = num;
        }

        ll maior = 0;
        for(int i=n-1; i>=0; i--){
            if(v[i] > maior) maior = v[i];
            v[i] = maior;
        }

        ll atual = 0;
        for(int i=0; i<n; i++){
            atual += v[i];
            v[i] = atual;
        }

        vector<ll> sol;
        while(q--){
            ll l, r; cin >> l >> r;
            l--, r--;
            ll res = v[r];

            if(l>0) sol.push_back(v[r] - v[l-1]);
            else sol.push_back(v[r]);

        }
        for(auto &x : sol) cout << x << ' ';
        cout << '\n';
        
        // for(auto &x : v) cout << x << ' ';
        // cout << '\n';
    }
}

signed main(){
    fastio;
    solve();
}