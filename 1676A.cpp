    #include <bits/stdc++.h>
    using namespace std;
    #define fastio cin.tie(0); ios::sync_with_stdio(0)
    #define ll unsigned long long

    void solve(){
        int t; cin >> t;

        while(t--){
            string s; cin >> s;

            int sum1 = s[0] - '0' + s[1] - '0' + s[2] - '0', sum2 = s[3] - '0' + s[4] - '0' + s[5] - '0';

            (sum1 == sum2) ? cout << "YES\n" : cout << "NO\n";
        }
    }

    signed main(){
        fastio;
        solve();
    }