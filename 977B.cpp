#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    int n; cin >> n;

    string s; cin >> s;

    map<string, int> m;

    for(int i=0; i<n-1; i++){
        m[s.substr(i, 2)]++;
    }

    string sol = "";
    int maior = 0;

    for(auto &x : m){
        if(x.second > maior){
            maior = x.second;
            sol = x.first;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}