#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>

void solve(){
    int n,m,a,b; cin >> n >> m >> a >> b;

    if(m*a <= b) cout << n * a << '\n';
    else{
        int sol = (n/m) * b;
        int resto = min((n%m)*a, b);
        cout << sol + resto << '\n';
    }
}


signed main(){
    fastio;
    solve();
}