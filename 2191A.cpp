#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void res(vector<pair<int, string>> v, int n){
    for(int i=0; i<n-1; i++){
        if(v[i].second == v[i+1].second){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        
        vector<pair<int, string>> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i].first;
            if(i%2 == 0) v[i].second = "red";
            else v[i].second = "blue";
        }

        sort(v.begin(), v.end());

        res(v, n);
    }
}

signed main(){
    fastio;
    solve();
}