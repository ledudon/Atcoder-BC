#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    long long n;
    cin >> n;
    long long val = 1;
    for(int i = 0; i < 100; i++){
        if(val > n){
            cout << i-1 << endl;
            break;
        }
        val = val << 1;
    }
    return 0;
}