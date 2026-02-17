#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    int t; cin >> t;

    while(t--){
        int w, h, n; cin >> w >> h >> n;

        int sol = 1;

        while(w%2==0){
            w /= 2;
            sol *= 2;
        }
        
        while(h%2==0){
            h /= 2;
            sol *= 2;
        }

        if(sol >= n) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}