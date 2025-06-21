#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    ll maxN = 0;
    for(ll i = 0; i <= n; i++){
        ll count = 0;
        for(ll j = 0; j < n; j++){
            if(i <= a[j]){
                count++;
            }
        }
        if(count >= i){
            maxN = max(maxN, i);
        }
    }

    cout << maxN << endl;
    
    return 0;
}