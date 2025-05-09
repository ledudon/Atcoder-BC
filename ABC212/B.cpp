#include <bits/stdc++.h>
using namespace std;

int main(void){
    string x;
    cin >> x;
    if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3]){
        cout << "Weak" << endl;
        return 0;
    }
    for(int i = 0; i < 3; i++){
        if(x[i] == '9' && x[i+1] == '0'){
            continue;
        }
        if(x[i] == x[i+1] - 1){
            continue;
        }
        cout << "Strong" << endl;
        return 0;
    }
    cout << "Weak" << endl;
    return 0;
}