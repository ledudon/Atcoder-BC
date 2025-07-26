#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int cas = 0; cas < T; cas++) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N), B(N);
        rep(i, 0, N) cin >> A[i];
        rep(i, 0, N) cin >> B[i];

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        multiset<int> bset(B.begin(), B.end());

        long long total = 0;
        for (int i = 0; i < N; i++) {
            // Bj ≥ M - Ai となる最小のB_jを探す
            auto it = bset.lower_bound(M - A[i]);
            if (it != bset.end()) {
                total += (A[i] + *it) % M;
                bset.erase(it);
            } else {
                // 条件を満たさない → 一番小さいBを使う
                auto min_b = bset.begin();
                total += (A[i] + *min_b) % M;
                bset.erase(min_b);
            }
        }

        cout << total << endl;
    }
    return 0;
}