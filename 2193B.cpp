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
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        int indice = n;
        for(int i=0; i<n; i++){
            if(v[i] != indice){
                auto it = find(v.begin()+i, v.end(), indice);
                int dist = distance(v.begin(), it);
                reverse(v.begin()+i, v.begin()+dist+1);
                break;
            }
            else indice--;
        }

        for(auto &x : v) cout << x << ' ';
        cout << '\n';
    }
}

signed main(){
    fastio;
    solve();
}