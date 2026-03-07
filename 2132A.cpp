#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n; cin >> n;
    string sol; cin >> sol;
    int m; cin >> n;
    string s; cin >> s;
    string d; cin >> d;

    for(int i=0; i<d.size(); i++){
        if(d[i] == 'V'){
            sol = s[i] + sol;
        }
        else{
            sol += s[i];
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