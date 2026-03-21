#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n; cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;
    
    vector<int> ord = v;
    sort(ord.begin(), ord.end());
    if(ord != v){
        cout << 0 << '\n';
        return;
    }

    int sol = INT_MAX;
    for(int i=0; i<n-1; i++){
        if(abs(v[i+1] - v[i]) < sol) sol = abs(v[i+1] - v[i]);
    }

    cout << sol/2+1 << '\n';

}

signed main() 
{
  int t; cin >> t;
  while(t--)
    solve();
}