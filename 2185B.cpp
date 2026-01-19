    #include <bits/stdc++.h>
    using namespace std;
    #define fastio cin.tie(0); ios::sync_with_stdio(0)
    #define ll unsigned long long



    void solve(){
        int t; cin >> t;

        while(t--){
            int n; cin >> n;

            vector<ll> v(n);
            for(auto &x : v) cin >> x;

            ll maior = 0;

            for(int i=0; i<n; i++){
                if(v[i] > maior) maior = v[i];
            }

            cout << maior * n << '\n';
        }
    }

    signed main(){
        fastio;
        solve();
    }