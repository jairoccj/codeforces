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
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        int l=0, r=n-1;
        for(int i=0; i<n; i++){
            if(i%2==0){
                cout << v[l] << ' ';
                l++;
            }
            else{
                cout << v[r] << ' ';
                r--;
            }
        }
        cout << '\n';
    }
}

signed main(){
    fastio;
    solve();
}