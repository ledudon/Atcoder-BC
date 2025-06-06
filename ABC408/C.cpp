#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> imos(n+1);
    rep(i, 0, m){
        int l, r;
        cin >> l >> r;
        imos[l-1]++;
        imos[r]--;
    }
    int min = INT_MAX;
    int sum = 0;
    rep(i, 0, n){
        sum += imos[i];
        // cout << "imos:" << imos[i] << ", sum = " << sum << endl;
        if(sum < min) min = sum;
    }
    cout << min << endl;
    
    return 0;
}