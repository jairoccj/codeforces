#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int k, r; cin >> k >> r;

    int sol = 1;
    int atual = k;

    while(atual % 10 != 0){
        if((atual % 10) - r == 0) break;
        sol++;
        atual += k;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}