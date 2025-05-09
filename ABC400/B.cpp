#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    for(ll i = 0; i <= m; i++){
        sum += pow(n, i);
        if(sum > 1e9){
            cout << "inf" << endl;
            return 0;
        }
    }
    cout << sum << endl;
    
    return 0;
}