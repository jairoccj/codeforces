    #include <bits/stdc++.h>
    using namespace std;
    #define fastio cin.tie(0); ios::sync_with_stdio(0)
    #define ll unsigned long long



    void solve(){
        int t; cin >> t;

        vector<ll> roots(20);

        for(int i=0; i<20; i++){
            roots[i] = (i+1)*(i+1);
        }

        while(t--){
            int n; cin >> n;

            for(int i=0; i<n; i++){
                cout << roots[i] << ' ';
            }
            cout << '\n';
        }
    }

    signed main(){
        fastio;
        solve();
    }