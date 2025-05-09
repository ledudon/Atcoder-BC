#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int x;
    cin >> x;
    if(x < 40) cout << 40 - x << endl;
    else if(x < 70) cout << 70 - x << endl;
    else if(x < 90) cout << 90 - x << endl;
    else cout << "expert" << endl;
    return 0;
}