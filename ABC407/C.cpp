#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    string s;
    cin >> s;

    int count = 0;
    for(int i = s.length()-1; i > 0; i--){
        if(s[i-1] < s[i]) count++;
    }
    int ans = s.length() + count*10 + s[0]-'0';
    cout << ans << endl;
    return 0;
}