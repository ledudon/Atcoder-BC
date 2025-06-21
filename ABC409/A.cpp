#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    string t, a;
    cin >> n >> t >> a;
    for(int i = 0; i < n; i++){
        if(t[i] == a[i] && t[i] == 'o'){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    
    return 0;
}