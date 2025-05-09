#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    string s;
    cin >> s;
    for(int i = 0; i <= s.size(); i++){
        if(i == s.size()){
            cout << (char)('a' + i) << endl;
            return 0;
        }
        if(s.find('a' + i) == string::npos){
            cout << char('a' + i) << endl;
            return 0;
        }
    }
    return 0;
}