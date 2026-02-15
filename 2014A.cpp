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
        int n, k; cin >> n >> k;

        int sol = 0;
        int atual = 0;

        for(int i=0; i<n; i++){
            int num; cin >> num;
            if(num>=k ) atual += num;
            else if(num == 0 && atual > 0){
                sol++;
                atual--;
            }
        }

        cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}