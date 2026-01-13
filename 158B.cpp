#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){

    int n; cin >> n;

    vector<int> v(4);

    for(int i=0; i<n; i++){
        int num; cin >> num;
        v[num-1]++;
    }

    int sol = v[3] + v[2] + v[1] / 2;
    v[0] -= v[2];

    if(v[1] % 2 == 1){
        sol ++;
        v[0] -= 2;
    }
    if(v[0] > 0){
        sol += (v[0]+3) / 4;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}