
#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int l = 0, r = n-1;

        int sol = 0;

        while(l<=r){
            if(s[l] != s[r]){
                l++;
                r--;
                sol += 2;
            }else break;
        }

        cout << n - sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}