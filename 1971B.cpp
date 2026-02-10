#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        set<char> mySet;

        for(auto &x : s) mySet.insert(x);

        if(mySet.size() == 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            int n = s.size();
            string sol = "";
            for(int i=n-1; i>=0; i--){
                sol += s[i];
            }

            if(sol != s) cout << sol << '\n';
            else{
                sol = "";
                for(int i=1; i<n; i++) sol += s[i];
                sol += s[0];
                cout << sol << '\n';
            }
        }
    }
}

signed main(){
    fastio;
    solve();
}