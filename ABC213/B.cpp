#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int max = -1e9, max2 = -1e9;
    int idx = -1, idx2 = -1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a > max){
            max2 = max;
            max = a;
            idx2 = idx;
            idx = i;
        }else if(a > max2){
            max2 = a;
            idx2 = i;
        }
    }
    cout << idx2+1 << endl;
    return 0;
}