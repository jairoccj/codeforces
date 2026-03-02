#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    ll n; cin >> n;

    ll a, b;
    b = n/3;
    a = b;

    if(n%3==1) a++;
    else if(n%3==2) b++;

    cout << a << ' ' << b << '\n';
}

signed main(){
    fastio;
    int t; cin >> t;
    while(t--){
        solve();
    }
}