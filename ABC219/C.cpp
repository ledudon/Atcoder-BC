#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;


int main(void){
    string x;
    cin >> x;
    
    int order[26];
    for(int i = 0; i < 26; i++){
        order[x[i] - 'a'] = i;
    }

    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];

    sort(all(s), [&](const string& a, const string& b){
        int n = min(a.length(), b.length());
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                return order[a[i] - 'a'] < order[b[i] - 'a'];
            }
        }
        return a.length() < b.length();
    });

    for(string ans : s) cout << ans << endl;

    return 0;
}