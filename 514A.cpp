    #include <bits/stdc++.h>
    using namespace std;
    #define fastio cin.tie(0); ios::sync_with_stdio(0)
    #define ll long long
    #define vs vector<string>
    #define vi vector<int>
    #define vll vector<long long>
    #define f(i) for(int i=0; i<(i); i++)

    void solve(){
        string s; cin >> s;
        string sol = "";

        if(s[0] != '9'){
            if(s[0] == '5') sol += '4';
            else if(s[0] == '6') sol += '3';
            else if(s[0] == '7') sol += '2';
            else if(s[0] == '8') sol += '1';
            else sol += s[0];
        }
        else sol += '9';

        for(int i=1; i<s.size(); i++){
            if(s[i] == '5') sol += '4';
            else if(s[i] == '6') sol += '3';
            else if(s[i] == '7') sol += '2';
            else if(s[i] == '8') sol += '1';
            else if(s[i] == '9') sol += '0';
            else sol += s[i];
        }

        cout << sol << '\n';
    }

    signed main(){
        fastio;
        solve();
    }

    // 5 = 4
    // 6 = 3
    // 7 = 2
    // 8 = 1
    // 9 = 0