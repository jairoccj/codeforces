#include <bits/stdc++.h>
using namespace std;

vector<int> v(1000000, -1);

void solve(){
    int n; cin >> n;

    cout << v[n] << '\n';
}

signed main() 
{
    int atual = 0;
    for(int i=1; i<1000000; i++){
        string s = to_string(i);
        int qtd = 0;
        for(char c : s){
            if(c != '0') qtd++;
        }
        if(qtd == 1) atual++;
        v[i] = atual;
    }

    int t; cin >> t;
    while(t--)
        solve();
}