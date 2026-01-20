#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    int n; cin >> n;

    map<string, int> m;

    while(n--){
        string s; cin >> s;

        m[s]++;
    }

    int valor = 0;
    string sol = "";
    for(auto &x : m){
        if(x.second > valor){
            sol = x.first;
            valor = x.second;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}