#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    map<int, int> counter;
    vector<int> A(n);
    rep(i, 0, n){
        int a;
        cin >> a;
        A[i] = a;
        counter[a]++;
    }

    int max = -1;
    for(auto a : counter){
        if(a.first > max && a.second < 2) max = a.first;
    }
    if(max == -1) cout << -1 << endl;
    else cout << distance(A.begin(), find(all(A), max)) + 1 << endl;

    return 0;
}