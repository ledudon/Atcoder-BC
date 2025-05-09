#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int N;
    cin >> N;
    string s;

    int count = 0;
    bool isLogin = false;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(s == "login"){
            isLogin = true;
        }
        else if(s == "logout"){
            isLogin = false;
        }
        else if(s == "private" && !isLogin){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}