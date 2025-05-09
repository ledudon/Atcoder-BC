#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    string ans = "";
    for(int i = 0; i < n; i++){
        ans += '-';
    }
    if(n%2 == 0) ans[n/2] = ans[n/2-1] = '=';
    else ans[n/2] = '=';
    cout << ans << endl;

    
    return 0;
}