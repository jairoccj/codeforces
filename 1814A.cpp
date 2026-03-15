#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

void solve(){
    ll n, k; cin >> n >> k;

    for(int i=0; i<2; i++){
        if( n-i*k >= 0 && (n-i*k)%2 == 0){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

signed main() 
{
  int t; cin >> t;
  while(t--)
    solve();
}