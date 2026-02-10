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
        vector<int> v(2);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        cout << v[0] << ' ' << v[1] << '\n';
    }
}

signed main(){
    fastio;
    solve();
}