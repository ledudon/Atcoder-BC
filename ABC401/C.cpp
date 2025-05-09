#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int N, K;
    cin >> N >> K;

    if(K > N){
        cout << 1 << endl;
        return 0;
    }

    vector<ll> A(N+1);
    vector<ll> sum(N+2, 0);
    A[0] = 1;
    rep(i, 0, K){
        A[i] = 1;
        sum[i+1] = sum[i] + A[i];
    }
    rep(i, K, N+1){
        A[i] = (sum[i] - sum[i-K]) % 1000000000;
        sum[i+1] = sum[i] + A[i];
    }
    cout << A[N] << endl;
    
    return 0;
}