#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    cout << a.size() << endl;
    rep(i, 0, a.size()){
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}