#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    cin >> n;

    int s[200000], t[200000];
    rep(i, 0, n) cin >> s[i];
    int min = 1e9;
    int index = 0;
    rep(i, 0, n){
        cin >> t[i];
        if(t[i] < min){
            min = t[i];
            index = i;
        }
    }

    int ans[200000];
    long long sum = 1e9;
    rep(i, 0, n){
        if(sum < t[index]){
            ans[index] = sum;
            sum += s[index];
        }else{
            ans[index] = t[index];
            sum = t[index] + s[index];
        }
        index++;
        if(index >= n) index -= n;
    }

    rep(i, 0, n) cout << ans[i] << endl;


    return 0;
}