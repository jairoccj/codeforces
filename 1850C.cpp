#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    int t; cin >> t;

    while(t--){
        string sol = "";
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                char c; cin >> c;
                if(c!='.') sol += c;
            }
        }

        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}