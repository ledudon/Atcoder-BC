#include <iostream>
#include <vector>
using namespace std;

int main(){
    int asum = 0, bsum = 0;
    int n;
    for(int i = 0; i < 9; i++){
        cin >> n;
        asum += n;
    }
    for(int i = 0; i < 8; i++){
        cin >> n;
        bsum += n;
    }
    cout << asum - bsum + 1 << endl;

    return 0;
}