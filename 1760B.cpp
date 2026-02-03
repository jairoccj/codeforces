#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void sol(string s, int n){
    
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int sol = 0;
        for(auto &x : s){
            if(x - 'a' > sol) sol = x - 'a';
        }
        sol++;
        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}