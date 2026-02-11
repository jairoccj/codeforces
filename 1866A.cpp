#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    int n; cin >> n;

    int sol = INT_MAX;
    for(int i=0; i<n; i++){
        int num; cin >> num;

        if(abs(num - 0) < sol) sol = abs(num - 0);
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}