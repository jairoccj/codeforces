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

        int pares=0, impares=0;
        for(int i=0; i<n*2; i++){
            int num; cin >> num;
            if(num%2==0) pares++;
            else impares++;
        }

        if(pares==impares) cout << "Yes\n";
        else cout << "No\n";
    }
}

signed main(){
    fastio;
    solve();
}