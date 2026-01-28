
#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

bool is_prime(ll n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve(){
    ll n; cin >> n;
    
    for(ll i=4; i<n; i++){
        if(is_prime(i) == false){
            if(is_prime(n-i) == false){
                cout << i << ' ' << n - i << '\n';
                return;
            }
        }
    }
}

signed main(){
    fastio;
    solve();
}