#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int s, n; cin >> s >> n;

    vector<pair<ll, ll>> dragons(n);

    for(int i=0; i<n; i++){
        cin >> dragons[i].first;
        cin >> dragons[i].second;
    }

    sort(dragons.begin(),dragons.end());

    for(int i=0; i<n; i++){
        if(dragons[i].first < s){
            s += dragons[i].second;
        }
        else{
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

signed main(){
    fastio;
    solve();
}