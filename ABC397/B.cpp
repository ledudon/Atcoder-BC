#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    string s;
    cin >> s;
    int count = 0;
    char past = 'k';
    for(int i = 0; i < (int)s.length(); i++){
        if(i == 0 && s[i] == 'o') count++;
        if(i == (int)s.length()-1 && s[i] == 'i') count++;
        if(past == s[i]) count++;
        past = s[i];
    }
    cout << count << endl;

    return 0;
}