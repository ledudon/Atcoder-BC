#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int x, y;
    cin >> x >> y;
    int count = 0;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            if(i+j >= x || abs(i - j) >= y) count++;
        }
    }

    string ans = "";
    if(count == 36) ans = "1";
    else ans = "0.";
    while(count%36 != 0 && ans.length() < 13){
        count *= 10;
        ans += to_string(count / 36);
        count = count % 36;
    }
    cout << ans << endl;
    return 0;
}