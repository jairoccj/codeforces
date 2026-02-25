#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    string s; cin >> s;
    char c; cin >> c;
    bool sol = false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == c && i%2==0){
            sol = true;
            break;
        }
    }

    if(sol) cout << "YES\n";
    else cout << "NO\n";
}


signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}