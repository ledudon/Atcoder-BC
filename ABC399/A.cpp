#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(s.at(i) != t.at(i)) count++;
    }
    
    cout << count << endl;

    return 0;
}