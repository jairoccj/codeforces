#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n, m; cin >> n >> m;

    int num = min(n, m);

    if(num%2 == 0) cout << "Malvika\n";
    else cout << "Akshat\n";

}

signed main(){
    fastio;
    solve();
}