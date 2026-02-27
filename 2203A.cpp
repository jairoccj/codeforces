#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n, w, d; cin >> n >> w >> d;

    int maximo = d/w + 1;
    int sol = (n + maximo - 1) / maximo;

    cout << sol << '\n';
}


signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}