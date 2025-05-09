#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> p(n+1), q(n+1);
    rep(i, 1, n+1) cin >> p[i];
    rep(i, 1, n+1) q[p[i]] = i;
    rep(i, 1, n+1) cout << q[i] << " ";
    cout << endl;
    
    return 0;
}