#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int p[26];
    rep(i, 0, 26) cin >> p[i];
    string s = "";
    rep(i, 0, 26){
        s.push_back('a' + p[i]-1);
    }
    cout << s << endl;
    
    return 0;
}