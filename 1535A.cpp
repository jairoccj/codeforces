#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    vi v1(2);
    vi v2(2);
    for(auto &x : v1) cin >> x;
    for(auto &x : v2) cin >> x;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(v1[0] < v2[1] && v2[0] < v1[1])
        cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}