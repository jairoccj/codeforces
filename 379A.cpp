#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define f(i) for(int i=0; i<(i); i++)


void solve(){
    int a, b; cin >> a >> b;

    int sol = 0;
    int resto = 0;

    do{
        sol += a;
        resto += a;
        a = (resto/b);
        resto %= b;
    }while(a>0);

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}