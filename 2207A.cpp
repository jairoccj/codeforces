#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    for(int i=1; i<n-1; i++){
        if(s[i-1] == '1' && s[i+1] == '1') s[i] = '1';
    }
    int maximo = 0;
    for(auto &x : s) if(x == '1') maximo++;

    for(int i=1; i<n-1; i++){
        if(s[i-1] == '1' && s[i+1] == '1') s[i] = '0';
    }
    int minimo = 0;
    for(auto &x : s) if(x == '1') minimo++;

    cout << minimo << ' ' << maximo << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}