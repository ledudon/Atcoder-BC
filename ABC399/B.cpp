#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    int p[100];
    rep(i, 0, n) cin >> p[i];

    int r = 1;
    int rank[100];
    while(r <= n){
        int max = -1;
        rep(j, 0, n) max = max < p[j] ? p[j] : max;
        int k = 0;
        rep(j, 0, n){
            if(p[j] == max){
                rank[j] = r;
                k++;
            }
        }
        r += k;
    }
    rep(i, 0, n) cout << rank[i] << endl;
    
    return 0;
}