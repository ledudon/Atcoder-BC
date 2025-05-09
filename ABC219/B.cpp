#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    string s[4];
    cin >> s[1] >> s[2] >> s[3];
    string t;
    cin >> t;
    for(int i = 0; i < t.length(); i++){
        cout << s[t[i] - '0'];
    }
    cout << endl;
    return 0;
}