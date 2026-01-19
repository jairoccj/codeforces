    #include <bits/stdc++.h>
    using namespace std;
    #define fastio cin.tie(0); ios::sync_with_stdio(0)
    #define ll long long

    void solve(){
        ll t; cin >> t;

        while(t--){
            int n; cin >> n;

            vector<ll> v(n);
            for(auto &x : v) cin >> x;

            sort(v.begin(), v.end());

            int tamanho_atual = 1;
            int maior_tamanho = 1;

            auto it = unique(v.begin(), v.end());

            v.erase(it, v.end());

            int tamanho = v.size();

            if(tamanho == 1){
                cout << 1 << '\n';
            }
            
            else{
                for(int i=0; i<tamanho-1;i++){
                    if(v[i+1] == v[i]+1){
                        tamanho_atual++;
                        maior_tamanho = max(tamanho_atual, maior_tamanho);
                    }
                    else tamanho_atual = 1;
                }
    
                cout << maior_tamanho << '\n';
            }
        }
    }

    signed main(){
        fastio;
        solve();
    }