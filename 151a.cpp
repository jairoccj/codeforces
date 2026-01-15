#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int amigos, garrafas, milimetros, limoes, cortes, sal, min_mil, gramas_sal; 
    
    cin >> amigos >> garrafas >> milimetros >> limoes >> cortes >> sal >> min_mil >> gramas_sal;

    int total = (garrafas * milimetros) / min_mil;

    int total_limoes = limoes * cortes;

    int total_sal = sal / gramas_sal;

    int sol = min(total, min(total_limoes,total_sal)) / amigos;

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}