
#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int t; cin >> t;

    while(t--){
        int a, b, c; cin >> a >> b >> c;

        if(a < b && b < c) cout << "STAIR\n";
        else if(a < b && b > c) cout << "PEAK\n";
        else cout << "NONE\n";
    }
}

signed main(){
    fastio;
    solve();
}