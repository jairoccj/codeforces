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

        int winner = 0;
        int qual = 0;

        for(int i=0; i<n; i++){
            int tamanho, qualidade; 
            cin >> tamanho >> qualidade;
            if(tamanho <= 10){
                if(qualidade > qual){
                    qual = qualidade;
                    winner = i+1;
                }
            }
        }

        cout << winner << '\n';
    }
}

signed main(){
    fastio;
    solve();
}