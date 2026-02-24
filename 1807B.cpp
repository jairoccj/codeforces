#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n; cin >> n;
    int pares = 0;
    int impares = 0;

    for(int i=0; i<n; i++){
        int num; cin >> num;
        if(num%2==0) pares+=num;
        else impares+=num;
    }

    if(pares>impares) cout << "YES\n";
    else cout << "NO\n";
}


signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}