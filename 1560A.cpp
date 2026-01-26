#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    vector<int> v;
    int c = 0;
    int num = 1;
    string s = "";

    while(true){
        if(c>1100) break;
        if(num % 3 != 0){
            s = to_string(num);
            if(s[s.size()-1] != '3'){
                v.push_back(num);
                c++;
            }
        }
        num++;
    }

    while(t--){
        int n; cin >> n;

        cout << v[n-1] << '\n';
    }
}

signed main(){
    fastio;
    solve();
}