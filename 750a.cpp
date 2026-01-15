#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n, tempo; cin >> n >> tempo;

    int total = 240;

    int resto = total - tempo;
    int sol = 0;

    vector<int> v(n);
    v[0] = 5;
    for(int i=1; i<n; i++){
        v[i] = v[i-1] + 5;
    }

    vector<int> v2(n);
    partial_sum(v.begin(), v.end(), v2.begin());

    for(auto &x : v2){
        if(x <= resto){
            sol++;
        }
        else break;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}