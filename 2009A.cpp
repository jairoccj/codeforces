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
        int a, b; cin >> a >> b;

        int sol = INT_MAX;
        for(int c=a; c<=b; c++){
            if((c - a) + (b - c) < sol) sol = (c - a) + (b - c);
        }

        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}