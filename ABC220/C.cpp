#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    ll n;
    cin >> n;
    vector<ll> A(n);
    rep(i, 0, n) cin >> A[i];
    ll X;
    cin >> X;

    ll sum = 0;
    rep(i, 0, n) sum += A[i];
    ll P = X / sum;
    ll sumb = P * sum;
    ll count = P * n;
    for(int i = 0; sumb <= X; i++){
        sumb += A[i];
        count++;
    }

    cout << count << endl;

    return 0;
}