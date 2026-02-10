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
    int sol = 0;
    int i = 1;
    do{
        if(i%2!=0){
            i = (n+2-1) / 2 + (i/2);
            sol++;
        }else{
            i = i/2;
            sol++;
        }
    }while(i!=1);

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}