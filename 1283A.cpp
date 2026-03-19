#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h, m; cin >> h >> m;

    int sol = 24 * 60;
    int atual = h * 60 + m;

    cout << sol - atual << '\n';
}

signed main() 
{
  int t; cin >> t;
  while(t--)
    solve();
}