#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int N, K, X;
vector<string> S;
vector<string> all;

void dfs(int depth, string current) {
    if (depth == K) {
        all.push_back(current);
        return;
    }
    for (int i = 0; i < N; ++i) {
        dfs(depth + 1, current + S[i]);
    }
}

int main() {
    cin >> N >> K >> X;
    S.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    sort(S.begin(), S.end());

    dfs(0, "");

    sort(all.begin(), all.end());

    cout << all[X - 1] << endl;
    return 0;
}
