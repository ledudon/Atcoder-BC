#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

unsigned GetDigit(ll num){
	unsigned digit = 0;
	while(num != 0){
		num /= 10;
		digit++;
	}
	return digit;
}

int main(void){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    ll ans = 1;
    ll max = pow(10, k);
    rep(i, 0, n){
        if(ans <= max/a[i]){
            ans *= a[i];
        }else{
            ans = 1;
        }
        if(GetDigit(ans) > k){
            ans = 1;
        }
    }
    if(GetDigit(ans) > k){
        ans = 1;
    }
    if(ans < 0){
        ans = 1;
    }

    cout << ans << endl;
    return 0;
}