#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int sol = 0;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            sol += num;
        }

        if(sol%2==0) cout << "YES\n";
        else cout << "NO\n";
    }

}

signed main(){
    fastio;
    solve();
}