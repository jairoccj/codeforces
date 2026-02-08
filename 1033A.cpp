#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for(int i=(i); i<(n); i++)
#define pii pair<int, int>

vector<vector<bool>> rainha(int n){
    pii rainha; cin >> rainha.first >> rainha.second;
    rainha.first--;
    rainha.second--;
    
    vector<vector<bool>> matriz(n, vector<bool>(n));

    for(int i=0; i<n; i++){ // horizontais da rainha
        matriz[rainha.first][i] = 1;
    }
    for(int i=0; i<n; i++){ // verticais da rainha
        matriz[i][rainha.second] = 1;
    }
    for(int i=0; i<n; i++){ // diagonais da rainha
        int p1 = rainha.first+i;
        int p2 = rainha.second+i;
        if(p1 >= 0 && p1 <= n-1 && p2 >= 0 && p2 <= n-1){
            matriz[p1][p2] = 1;
        }
    }
    for(int i=0; i<n; i++){ // diagonais da rainha
        int p1 = rainha.first-i;
        int p2 = rainha.second+i;
        if(p1 >= 0 && p1 <= n-1 && p2 >= 0 && p2 <= n-1){
            matriz[p1][p2] = 1;
        }
    }
    for(int i=0; i<n; i++){ // diagonais da rainha
        int p1 = rainha.first+i;
        int p2 = rainha.second-i;
        if(p1 >= 0 && p1 <= n-1 && p2 >= 0 && p2 <= n-1){
            matriz[p1][p2] = 1;
        }
    }
    for(int i=0; i<n; i++){ // diagonais da rainha
        int p1 = rainha.first-i;
        int p2 = rainha.second-i;
        if(p1 >= 0 && p1 <= n-1 && 
            p2 >= 0 && p2 <= n-1){
            matriz[p1][p2] = 1;
        }
    }

    return matriz;
}

bool dfs(int x, int y, int ax, int ay, 
    vector<vector<bool>> &matriz,
    vector<vector<bool>> &visitados, int n){
        if(x < 0 || x >= n || y < 0 || y >= n) return false;

        if(matriz[x][y] || visitados[x][y]) return false;

        if(x == ax && y == ay) return true;

        visitados[x][y] = true;

        int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for(int i=0; i<8; i++){
            if(dfs(x + dx[i], y + dy[i], ax, ay, matriz, visitados, n)){
                return true;
            }
        }

        return false;
    }

void solve(){
    int n; cin >> n;
    vector<vector<bool>> matriz = rainha(n);

    pii rei; cin >> rei.first >> rei.second;
    rei.first--, rei.second--;
    
    pii alvo; cin >> alvo.first >> alvo.second;
    alvo.first--, alvo.second--;

    vector<vector<bool>> visitados(n, vector<bool>(n));
    if(dfs(rei.first, rei.second, 
        alvo.first, alvo.second, matriz,
        visitados, n)) cout << "YES\n";
    else cout << "NO\n";

    // for(auto &x : matriz){
    //     for(auto y : x) cout << y << ' ';
    //     cout << '\n';
    // }
}

signed main(){
    fastio;
    solve();
}