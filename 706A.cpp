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
    ll n; cin >> n;
    
    long double sol = LLONG_MAX;

    while(n--){
        ll x, y, v; cin >> x >> y >> v;

        long double dist = sqrt(pow((x-a),2) + pow((y-b),2));
        double tempo = dist/v;
        if(tempo < sol) sol = tempo;
    }

    cout << fixed << setprecision(20) << sol << '\n';
}

signed main(){
    fastio;
    solve();
}