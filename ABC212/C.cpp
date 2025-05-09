#include <bits/stdc++.h>
using namespace std;

int main(void){
    int M, N;
    cin >> N >> M;
    vector<int> A(N), B(M);

    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<M; i++){
        cin >> B.at(i);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int ans = 1e9;
    int a = 0, b = 0;
    while(a < N && b < M){
        ans = min(ans, abs(A.at(a) - B.at(b)));
        if(A.at(a) < B.at(b)){
            a++;
        }else{
            b++;
        }
    }

    cout << ans << endl;
    return 0;
}