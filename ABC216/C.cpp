#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    long long n;
    cin >> n;
    string ans;
    while(n > 0){
        if(n%2 == 0){
            n /= 2;
            ans.append("B");
        }else{
            n -= 1;
            ans.append("A");
        }
    }
    reverse(all(ans));
    cout << ans << endl;
    return 0;
}