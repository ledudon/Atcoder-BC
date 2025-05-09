#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1; c*i <= b; i++){
        if(a <= c*i){
            cout << c*i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}