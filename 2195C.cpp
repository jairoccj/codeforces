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
        vi v(n);
        for(auto &x : v) cin >> x;
        int sol = 0;

        // for(int i=0; i<n-1; i++){
        //     if(v[i] + v[i+1] == 7 || v[i] == v[i+1]){
        //         int nao1 = v[i];
        //         int nao2 = 7-v[i+1];
        //         for(int i=1; i<7; i++){
        //             if(i != nao1 && i != nao2){
        //                 v[i+1] = i;
        //                 sol++;
        //                 break;
        //             }
        //         }
        //     }
        // }
        for(int i=0; i<n-1; i++){
            if(v[i] + v[i+1] == 7 || v[i] == v[i+1]){
                sol++;
                i++;
            }
        }

        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}