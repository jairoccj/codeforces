#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i=0;i<n; i++){
        cin >> v[i];
        if(v[i]==n){
            int aux = v[0];
            v[0] = v[i];
            v[i] = aux;
        }
    }

    for(auto &x : v) cout << x << ' ';
    cout << '\n';
}

signed main() 
{
  int t; cin >> t;
  while(t--)
    solve();
}