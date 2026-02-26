#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n; cin >> n;
    // 2 3 5 7 11 13
    // 6 10 14 15
    if(n<31) cout << "NO\n";
    else{
        cout << "YES\n";
        int sol = n - 30;
        if(sol != 6 && sol != 10 && sol != 14){
            cout << sol << ' ' << 6 << ' ' << 10 << ' ' << 14 << '\n';
        }
        else{
            cout << sol-1 << ' ' << 6 << ' ' << 10 << ' ' << 15 << '\n';
        }
    }
}


signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}