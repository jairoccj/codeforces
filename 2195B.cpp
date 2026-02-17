#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)

int parte_impar(int x){
    while(x%2==0) x /= 2;
    return x;
}

bool heap(vi &v, int n){
    for(int i=1; i<=n; i++){
        if(parte_impar(i) != parte_impar(v[i])) return false;
    }
    return true;
}

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vi v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        if(heap(v, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}