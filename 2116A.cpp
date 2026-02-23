#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    ll a, b, c, d; cin >> a >> b >> c >> d;

    ll gelly=min(a,c), flower=min(b, d);

    if(gelly>=flower) cout << "Gellyfish\n";
    else cout << "Flower\n";
}


signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}