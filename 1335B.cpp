#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n, a, b; cin >> n >> a >> b;

    string s = "";

    char letra = 'a';
    for(int i=0; i<n; i++){
        int cont = letra - 'a';
        if(cont >= b){
            letra = 'a';
        }
        s += letra;
        letra++;
    }

    cout << s << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}