#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int h, w;

vector<vector<ll>> A;
unordered_map<ll, ll> memo;

inline int index(int y, int x) {
    return y * w + x;
}

ll dfs(ll mask) {
    if (memo.count(mask)) return memo[mask];

    ll current_xor = 0;
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            int idx = index(y, x);
            if ((mask >> idx) & 1) {
                current_xor ^= A[y][x];
            }
        }
    }

    ll res = current_xor;

    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            int idx1 = index(y, x);
            // 既にドミノがある
            if (!((mask >> idx1) & 1)) continue;

            // 右隣
            if (x + 1 < w) {
                // 右隣もドミノが無ければ
                int idx2 = index(y, x + 1);
                if ((mask >> idx2) & 1) {
                    ll new_mask = mask;
                    // ドミノを配置した場所を0にする
                    new_mask &= ~(1LL << idx1);
                    new_mask &= ~(1LL << idx2);
                    res = max(res, dfs(new_mask));
                }
            }

            // 下隣
            if (y + 1 < h) {
                int idx2 = index(y + 1, x);
                // 下隣もドミノが無ければ
                if ((mask >> idx2) & 1) {
                    ll new_mask = mask;
                    new_mask &= ~(1LL << idx1);
                    new_mask &= ~(1LL << idx2);
                    res = max(res, dfs(new_mask));
                }
            }
        }
    }

    return memo[mask] = res;
}

int main() {
    cin >> h >> w;
    A.resize(h, vector<ll>(w));
    rep(i, 0, h) rep(j, 0, w) cin >> A[i][j];

    ll full_mask = (1LL << (w * h)) - 1;
    cout << dfs(full_mask) << endl;
    return 0;
}
