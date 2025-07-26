#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(i >= l && i <= r){
            if(s[i] == 'x'){
                cout << "No" << endl;
                exit(0);
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}