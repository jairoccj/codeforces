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

        vi v(n+1);

        int sol = -1;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            v[num]++;
            if(v[num] >= 3){
                sol = num;
            }
        }
        cout << sol << '\n';
    }
}

signed main(){
    // fastio;
    solve();
}