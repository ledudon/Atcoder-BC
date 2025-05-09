#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    map<int, int> A;
    rep(i, 0, 7){
        int a;
        cin >> a;
        A[a]++;
    }
    bool two = false, three = false;
    for(auto a : A){
        if(a.second >= 3){
            three = true;
            A.erase(a.first);
            break;
        }
    }
    for(auto a : A){
        if(a.second >= 2){
            two = true;
            A.erase(a.first);
            break;
        }
    }
    if(two && three){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    
    return 0;
}