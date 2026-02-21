#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll unsigned long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<unsigned long long>
#define f(i) for(int i=0; i<(i); i++)

void solve(){
    string s; cin >> s;
    string num = "";

    int p = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            p = i;
            break;
        }
        num += s[i];
    }
    if(s[p-1] == '9') cout << "GOTO Vasilisa.\n";
    else if(s[p+1] < '5') cout << num << '\n';
    else{
        num[num.size()-1]++;
        cout << num << '\n';
    }
}


signed main(){
    fastio;
    solve();
    
}