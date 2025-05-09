#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    if(s[n-1] == 'o') cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}