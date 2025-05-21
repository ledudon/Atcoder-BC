#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> p(n, 0);
    vector<int> compPast(n, 0);
    cin >> p[0];
    rep(i, 1, n){
        cin >> p[i];
    }

    rep(i, 1, n-1){
        if(p[i] > p[i-1] && p[i] > p[i+1]) compPast[i] = 1;
        if(p[i] < p[i-1] && p[i] < p[i+1]) compPast[i] = -1; 
    }

    int count = 0;
    int right = 0;
    for(int left = 0; left < n; left++){
        if(left  == right) right++;
        bool hasPeak, hasValley;
        hasPeak = hasValley = false;
        while(right < n){
            if(compPast[right] == 1){
                hasPeak = true;
            }else if(compPast[right] == -1){
                hasValley = true;
            }
            if(hasPeak && hasValley){
                right++;
                break;
            }
            right++;
        }
        while(right < n && compPast[right] == 0){
            right++;
            count++;
        }
        if(compPast[right] == 1 || compPast[right] == -1){
            count++;
        }
    }

    cout << count << endl;

    
    return 0;
}