#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    ll police = 0;

    ll sol = 0;

    while(n--){
        int num; cin >> num;

        if(num>0) police += num;

        else{
            if(police >= num * -1){
                police -= num * -1;
            }
            else{
                sol += num * -1;
            }
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}