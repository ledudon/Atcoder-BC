#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    map<string, int> counter = {{"ABC", 0}, {"ARC", 0}, {"AGC", 0}, {"AHC", 0}};
    rep(i, 0, 3){
        string s;
        cin >> s;
        counter.erase(s);
    }
    cout << (*(counter.begin())).first << endl;
    
    return 0;
}