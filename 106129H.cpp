#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void dfs(ll raiz, vector<bool> &visitados, vector<vector<ll>> &adj){
    visitados[raiz] = true;

    for(ll viz : adj[raiz]){
        if(visitados[viz] == 0){
            dfs(viz, visitados, adj);
        }
    }
}


void solve(){
    ll n, m; cin >> n >> m;

    vector<bool> visitados_eu(n);
    vector<bool> visitados_ela(n);

    vector<vector<ll>> adj(n);

    for(ll i=0; i<m; i++){
        ll a, b; cin >> a >> b;
        a -=1, b -=1;
        adj[a].push_back(b);
    }

    ll a, b; cin >> a >> b;
    a--, b--;
    
    dfs(a, visitados_eu, adj);
    dfs(b, visitados_ela, adj);

    for(int i=0; i<n; i++){
        if(visitados_eu[i] && visitados_ela[i]){
            cout << "yes\n" << i+1 << '\n';
            return;
        }
    }
    cout << "no\n";
}

signed main(){
    fastio;
    solve();
}