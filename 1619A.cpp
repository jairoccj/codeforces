#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void sol(string s, int n){
    if(n == 1){
        cout << "NO\n";
        return;
    }
    string sub1 = s.substr(0, n/2);
    string sub2 = s.substr(n/2);

    if(sub1 == sub2) cout << "YES\n";
    else cout << "NO\n";
}

void solve(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int n = s.size();

        sol(s, n);
    }
}

signed main(){
    fastio;
    solve();
}