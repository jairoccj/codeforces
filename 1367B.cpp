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
        
        int par = 0, impar = 0;

        for(int i=0; i<n; i++){
            int num; cin >> num;
            if(num%2!=i%2){
                if(i%2==0) par++;
                else impar++;
            }
        }

        if(par != impar) cout << -1 << '\n';
        else cout << par << '\n';
    }
}

signed main(){
    fastio;
    solve();
}