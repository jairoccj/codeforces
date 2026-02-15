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
        int impares=0, pares=0;

        for(int i=0; i<n; i++){
            int num; cin >> num;
            if(num%2==0) pares++;
            else impares++;
        }
        
        if(impares>=1 && pares>=1) cout << "YES\n";
        else if(impares>=1 && n%2!=0) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}