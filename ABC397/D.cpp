#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    long long n;
    cin >> n;

    for(int x = 1; x*x*x - 1 <= n; x++){
        int left = 1, right = x-1;

        while(left <= right){
            int mid = (left + right) / 2;
            long long diff = x*x*x - mid*mid*mid;
            if(diff == n){
                cout << x << " " << mid << endl;
                return 0;
            }else if(diff < n){
                right = mid - 1;
                continue;
            }else if(diff > n){
                left = mid + 1;
                continue;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}