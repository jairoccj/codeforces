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
        int x, n; cin >> x >> n;
        if(n%2==0) cout << 0 << '\n';
        else cout << x << '\n';
    }
}

signed main(){
    fastio;
    solve();
}