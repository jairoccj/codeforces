
#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

void solve(){
    int n; cin >> n;

    int mishka=0, chris=0;

    while(n--){
        int m, c; cin >> m >> c;

        if(m>c) mishka++;
        else if(c>m) chris++;
    }

    if(mishka>chris) cout << "Mishka\n";
    else if(chris>mishka) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
}

signed main(){
    fastio;
    solve();
}