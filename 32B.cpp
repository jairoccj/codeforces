#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    string s; cin >> s;

    string sol = "";

    for(int i=0; i<s.size(); i++){
        if(s[i] == '.') sol += '0';
        else if(s[i] == '-' && s[i+1] == '.'){
            sol += '1';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            sol += '2';
            i++;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}