#include <iostream>
using namespace std;

int main(void){
    int A, B;
    cin >> A >> B;
    if(A == B)
        cout << -1 << endl;
    else{
        if((A == 1 || A == 3) && (B == 1 || B == 3)) cout << 2 << endl;
        if((A == 2 || A == 3) && (B == 2 || B == 3)) cout << 1 << endl;
        if((A == 2 || A == 1) && (B == 2 || B == 1)) cout << 3 << endl;
    }
    return 0;
}