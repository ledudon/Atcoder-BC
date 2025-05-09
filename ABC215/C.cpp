#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int main(void){
    string S;
    int K;
    cin >> S >> K;

    sort(all(S));
    int ind = 1;
    do{
        if(ind == K) break;
        ind++;
    }while(next_permutation(all(S)));
    for(auto c : S) cout << c;
    cout << endl;


    return 0;
}