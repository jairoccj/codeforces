#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)



void solve(){
    int n, m; cin >> n >> m;
    string s1, s2; cin >> s1 >> s2;
    int sol = 0;

    for(int i=0; i<6; i++){
        if(s1.find(s2) != string::npos){
            cout << sol << '\n';
            return;
        }
        else{
            sol++;
            s1 += s1;
        }
    }

    cout << -1 << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}