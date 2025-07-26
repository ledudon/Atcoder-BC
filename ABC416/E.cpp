#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dist(N, vector<long long>(N, INF));

    for (int i = 0; i < N; ++i) dist[i][i] = 0;

    for (int i = 0; i < M; ++i) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        --a, --b;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }

    int K;
    long long T;
    cin >> K >> T;

    vector<bool> inD(N, false);
    vector<int> D(K);
    for (int i = 0; i < K; ++i) {
        cin >> D[i];
        --D[i];
        inD[D[i]] = true;
    }

    // 完全グラフ
    for (int i = 0; i < K; ++i) {
        for (int j = i + 1; j < K; ++j) {
            int u = D[i], v = D[j];
            dist[u][v] = dist[v][u] = min(dist[u][v], T);
        }
    }

    // 最短距離の初期値
    for (int k = 0; k < N; ++k)
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    int Q;
    cin >> Q;
    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x, y;
            long long t;
            cin >> x >> y >> t;
            --x, --y;
            if (t < dist[x][y]) {
                dist[x][y] = dist[y][x] = t;
                // 距離行列を更新
                for (int i = 0; i < N; ++i)
                    for (int j = 0; j < N; ++j)
                        dist[i][j] = min(dist[i][j],
                            min(dist[i][x] + t + dist[y][j],
                                dist[i][y] + t + dist[x][j]));
            }
        } else if (type == 2) {
            int x;
            cin >> x;
            --x;
            if (!inD[x]) {
                inD[x] = true;
                for (int i = 0; i < N; ++i) {
                    if (inD[i] && i != x) {
                        if (T < dist[x][i]) {
                            dist[x][i] = dist[i][x] = T;
                        }
                    }
                }
                // 距離行列を更新
                for (int i = 0; i < N; ++i)
                    for (int j = 0; j < N; ++j)
                        dist[i][j] = min(dist[i][j],
                            min(dist[i][x] + dist[x][j],
                                dist[i][j]));
            }
        } else if (type == 3) {
            long long total = 0;
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    if (i != j && dist[i][j] < INF) {
                        total += dist[i][j];
                    }
                }
            }
            cout << total << '\n';
        }
    }

    return 0;
}