#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

bool cresc(vector<int> v){
    vector<int> ord = v;
    sort(ord.begin(), ord.end());

    if(v == ord) return true;
    return false;
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string sol = "";

        for(int i=0; i<n; i++){
            string s; cin >> s;
            for(int i=0; i<4; i++){
                if(s[i] == '#') sol += to_string(i+1);
            }    
        }

        reverse(sol.begin(), sol.end());

        for(auto &x : sol) cout << x << ' ';
        cout << '\n';
    }
}

signed main(){
    fastio;
    solve();
}