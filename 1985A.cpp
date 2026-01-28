#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long

bool cresc(vector<int> v){
    vector<int> ord = v;
    sort(ord.begin(), ord.end());

    if(v == ord) return true;
    return false;
}

void solve(){
    int t; cin >> t;

    while(t--){
        string a, b; cin >> a >> b;

        swap(a[0], b[0]);

        cout << a << ' ' << b << '\n';
    }
}

signed main(){
    fastio;
    solve();
}