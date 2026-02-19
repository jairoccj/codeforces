#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    ll n, m; cin >> n >> m;

    ll sol = 0;
    ll last = 1;

    for(ll i=0; i<m; i++){
        int num; cin >> num;
        if(last<=num){
            sol += num-last;
            last = num;
        }
        else{
            sol += n- last+num;
            last = num;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}