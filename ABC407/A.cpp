#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    int ans = a/b;
    if(a%b*10 / b >= 5) ans++;
    cout << ans << endl;
    return 0;
}