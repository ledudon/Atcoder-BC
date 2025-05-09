#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int k;
    cin >> k;
    string a, b;
    cin >> a >> b;

    ll A, B;
    A = B = 0;
    for(char c : a){
        A *= k;
        A += c - '0';
    }
    for(char c : b){
        B *= k;
        B += c - '0';
    }
    cout << A*B << endl;

    return 0;
}