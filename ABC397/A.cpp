#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    float x;
    cin >> x;
    if(x >= 38.0) cout << 1 << endl;
    else if(x >= 37.5) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}