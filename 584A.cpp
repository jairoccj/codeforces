#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    ll n, k; cin >> n >> k;

    if(k<10){
        for(int i=0; i<n; i++) cout << k;
        cout << '\n';
    }
    else{
        if(n==1) cout << -1 << '\n';
        else{
            for(int i=0; i<n-1; i++) cout << 1;
            cout << 0 << '\n';
        }
    }
}

signed main(){
    fastio;
    solve();
}