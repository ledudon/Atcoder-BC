#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n, s;
    cin >> n >> s;
    int current = 0;
    int past = 0;
    rep(i, 0, n){
        cin >> current;
        if(current - past > s){
            cout << "No" << endl;
            return 0;
        }
        past = current;
    }
    cout << "Yes" << endl;
    
    return 0;
}