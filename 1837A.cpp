#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    ll t; cin >> t;

    while(t--){
        ll n, k; cin >> n >> k;

        if(n%k!=0) cout << 1 << '\n' << n << '\n';
        else cout << 2 << '\n' << 1 << ' ' << n-1 << '\n';
    }
}

signed main(){
    fastio;
    solve();
}