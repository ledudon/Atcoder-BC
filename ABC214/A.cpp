#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    cin >> n;
    if(n <= 125){
        cout << "4" << endl;
    }else if(n <= 211){
        cout << "6" << endl;
    }else{
        cout << "8" << endl;
    }
    return 0;
}