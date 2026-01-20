#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll t; cin >> t;

    while(t--){
        ll n; cin >> n;

        ll hao = 0;


        while(n > 2){
            ll num1 = n / 3;
            n -= num1;
            ll num2 = n / 2;
            n -= num2;
            ll num3 = n;

            vector<ll> v(3);

            v[0] = num1;
            v[1] = num2;
            v[2] = num3;

            sort(v.begin(), v.end());

            hao += v[0];
            n = v[2];
        }

        cout << hao << '\n';
    }
}

signed main(){
    fastio;
    solve();
}