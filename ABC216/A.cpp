#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    string s;
    cin >> s;
    int x = (int)stoi(s);
    int y = *(s.end() - 1) - '0';
    if(y <= 2) cout << x << "-" << endl;
    else if(y <= 6) cout << x << endl;
    else cout << x << "+" << endl;
    
    return 0;
}