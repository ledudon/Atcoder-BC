#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > c){
        cout << "Yes" << endl;
    }else if(a == c){
        if(b > d){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else {
        cout << "No" << endl;
    }
    return 0;
}