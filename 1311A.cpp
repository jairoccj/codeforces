#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    ll a, b; cin >> a >> b;

    if(a==b) cout << 0 << '\n';
    else if((a>b && (a-b)%2==0) || (b>a && (b-a)%2!=0)){
        cout << 1 << '\n';
    }
    else cout << 2 << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}