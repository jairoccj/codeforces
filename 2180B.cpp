#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vs v(n);

        for(auto &x : v) cin >> x;
        string sol = "";

        for(auto &x : v) if(x + sol < sol + x) sol = x + sol;
        else sol = sol + x;

        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}