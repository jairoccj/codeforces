#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    string s; cin >> s;

    char sol = '9';
    for(auto &x : s){
        if(x >= '0' && x <= '9' && x < sol){
            sol = x;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}