#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<vector<char>> S(N, vector<char>(N));
    vector<vector<char>> T(N, vector<char>(N));
    rep(i, 0, N) rep(j, 0, N) cin >> S[i][j];
    rep(i, 0, N) rep(j, 0, N) cin >> T[i][j];

    int count = 0;
    int minCount = INT_MAX;
    rep(i, 0, N) rep(j, 0, N){
        if(S[i][j] != T[i][j]) count++;
    }
    if(count < minCount) minCount = count;
    count = 0;
    rep(i, 0, N) rep(j, 0, N){
        if(S[N-1 - j][i] != T[i][j]) count++;
    }
    if(count+1 < minCount) minCount = count + 1;
    count = 0;
    rep(i, 0, N) rep(j, 0, N){
        if(S[N-1 - i][N-1 - j] != T[i][j]) count++;
    }
    if(count+2 < minCount) minCount = count + 2;
    count = 0;
    rep(i, 0, N) rep(j, 0, N){
        if(S[j][N-1 - i] != T[i][j]) count++;
    }
    if(count+3 < minCount) minCount = count + 3;

    cout << minCount << endl;

    return 0;
}