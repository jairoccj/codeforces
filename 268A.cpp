#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    int n; cin >> n;

    vector<pair<int, int>> v(n);
    for(auto &x : v) cin >> x.first >> x.second;

    int sol = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i != j){
                if(v[i].first == v[j].second) sol++;
            }
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}