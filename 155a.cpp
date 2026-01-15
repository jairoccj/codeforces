#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;
    int primeiro; cin >> primeiro;

    int sol = 0;

    int maximo = primeiro;
    int minimo = primeiro;

    for(int i=0; i<n-1; i++){
        int num; cin >> num;

        if(num < minimo){
            minimo = num;
            sol++;
        }
        else if(num > maximo){
            maximo = num;
            sol++;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}