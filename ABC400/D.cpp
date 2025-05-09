#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int getDist(pair<int, int> a, pair<int, int> b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}

pair<int, int> operator+(pair<int, int> a, pair<int, int> b){
    return {a.first+b.first, a.second+b.second};
}

int main(void){
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    rep(i, 0, H){
        string s = "";
        cin >> s;
        grid.at(i) = s;
    }

    // (y, x)の順
    int A, B, C, D;
    pair<int, int> start, goal;
    cin >> A >> B >> C >> D;
    start.first = A-1;
    start.second = B-1;
    goal.first = C-1;
    goal.second = D-1;

    // 各マスのゴールまでの距離配列
    vector<vector<int>> dist(H, vector<int>(W, 1e9));
    queue<pair<int, int>> que;
    que.push(start);
    dist[start.first][start.second] = getDist(start, goal);

    vector<pair<int, int>> diff = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    while(!que.empty()){
        pair<int, int> x = que.front();
        que.pop();
        for(pair<int, int> a : diff){
            pair<int, int> tmp = x + a;
            if(tmp.first < 0 || tmp.second < 0 || tmp.first >= H || tmp.second >= W) continue;
            if(dist[tmp.first][tmp.second] != 1e9 || grid[tmp.first][tmp.second] != '.') continue;
            dist[tmp.first][tmp.second] = getDist(tmp, goal);
            que.push(tmp);
        }
    }

    int min = 1e9;
    rep(i, 0, H)rep(j, 0, W) if(dist[i][j] < min) min = dist[i][j];
    cout << min/2 << endl;



    
    return 0;
}

// ..........
// #########.
// #.......#.
// #..####.#.
// ##....#.#.
// #####.#.#.
// .##.#.#.#.
// ###.#.#.#.
// ###.#.#.#.
// #.....#...