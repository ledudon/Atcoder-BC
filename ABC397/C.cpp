#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];

    vector<int> leftCo(n), rightCo(n);
    map<int, int> counter;
    for(int i = 0; i < n; i++){
        counter[A[i]] += 1;
        leftCo[i] = counter.size();
    }
    counter.clear();
    for(int i = n-1; i >= 0; i--){
        counter[A[i]] += 1;
        rightCo[i] = counter.size();
    }

    int maxV = -1;
    for(int i = 0; i < n-1; i++){
        int temp = leftCo[i] + rightCo[i+1];
        if(temp > maxV) maxV = temp;
    }
    cout << maxV << endl;

    return 0;
}