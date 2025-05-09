#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

bool isSq(ll n){
    ll r = (ll)floor(sqrt((ll)n));
    return (r * r) == n;
}

int main(void){
    ll n;
    cin >> n;
    int limit = (int)floor(sqrt(n) + 1);
    int count = 0;
    // 二の倍数の平方数を除く平方数がそれぞれNまで
    for(ll b = 1; b < limit; b+=2){
        ll tmp = n / (b*b);
        while(tmp > 0){
            count++;
            tmp = tmp >> 1;
        }
        count--;
    }
    cout << count << endl;
    
    return 0;
}