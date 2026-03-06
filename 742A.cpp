#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    ll sol; cin >> sol;

    if(sol == 0)
        cout << 1 << '\n';
    else if(sol%4 == 0)
        cout << 6 << '\n';
    else if(sol%4 == 1)
        cout << 8 << '\n';
    else if(sol%4 == 2)
        cout << 4 << '\n';
    else if(sol%4 == 3)
        cout << 2 << '\n';
}

signed main(){
    fastio;
    solve();
}