#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    ll t; cin >> t;

    while(t--){
        ll n, m; cin >> n >> m;
        map<char, int> map = {
            {'A', 0},
            {'B', 0},
            {'C', 0},
            {'D', 0},
            {'E', 0},
            {'F', 0},
            {'G', 0},
        };

        for(int i=0; i<n; i++){
            char c; cin >> c;
            map[c]++;
        }

        ll sol = 0;
        for(auto x : map){
            x.second -= m;
            if(x.second < 0) sol += x.second;
        }

        cout << sol * -1 << '\n';
    }
}

signed main(){
    fastio;
    solve();
}