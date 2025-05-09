#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    int n;
    cin >> n;
    map<string, map<string, int>> counter;
    rep(i, 0, n){
        string s, t;
        cin >> s >> t;
        if(counter.count(s)){
            if(counter.at(s).count(t)){
                cout << "Yes" << endl;
                return 0;
            }else{
                counter.at(s)[t]++;
            }
        }else{
            map<string, int> temp = {{t, 1}};
            counter[s] = temp;
        }
    }
    cout << "No" << endl;
    
    return 0;
}