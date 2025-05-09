#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> counter;
    int min = 1e9;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(counter.count(A[i]) > 0){
            int len = i - counter[A[i]] + 1;
            if(len < min) min = len;
        }
        counter[A[i]] = i;
    }
    if(min < 1e9) cout << min << endl;
    else cout << -1 << endl;
    
    return 0;
}