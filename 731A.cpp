#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    string s; cin >> s;
    int sol = 0;
    char last = 'a';

    for(auto &x : s){
        sol += min(abs(x-last), 26 - abs(x-last));
        last = x;
    }

    cout << sol << '\n';
}


signed main(){
    fastio;
    solve();
}