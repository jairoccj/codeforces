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
        int soma = 0;

        int uns=0, dois=0;

        for(int i=0; i<n; i++){
            int num; cin >> num;
            soma += num;
            if(num == 1) uns++;
            else dois++;
        }

        if(soma%2!=0){
            cout << "NO\n";
        }
        else{
            int metade = soma / 2;
            if(metade%2==0 || (metade%2==1 && uns != 0)){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
}

signed main(){
    fastio;
    solve();
}