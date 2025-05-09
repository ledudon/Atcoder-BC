#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int N, R, C;
    string S;
    cin >> N >> R >> C >> S;
    pair<int, int> bonfire = {0, 0}, taka = {R, C};
    set<pair<int, int>> smokes;
    smokes.insert(bonfire);
    string ans = "";
    for(char s : S){
        if(s == 'E'){
            bonfire.second--;
            taka.second--;
        }
        else if(s == 'W'){
            bonfire.second++;
            taka.second++;
        }
        else if(s == 'N'){
            bonfire.first++;
            taka.first++;
        }
        else if(s == 'S'){
            bonfire.first--;
            taka.first--;
        }
        smokes.insert(bonfire);
        if(smokes.find(taka) == smokes.end()) ans += '0';
        else ans += '1';
    }
    
    cout << ans << endl;

    return 0;
}
