#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int s, t;
    cin >> s >> t;
    int count = 0;
    rep(i, 0, s+1) rep(j, 0, s+1) rep(k, 0, s+1){
        if(i+j+k > s) break;
        if(i*j*k > t) break;
        count++;
    } 
    cout << count << endl;
    return 0;
}