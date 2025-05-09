/*
1．各点の辺の長さと辺の接続先を2次元配列にまとめる
2．スタート地点から各点までの最短距離を入れる配列を作り、デカい数字で初期化、スタート地点までの距離を0にする
3．探索する点
*/


#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#include <vector>
using namespace std;

using cr_pair = pair<int, int>; //現在地を表す。<スタート地点から距離, 現在地のindex>
struct edge
{
    int to;
    int cost;
};

int main()
{
    int s, g; // s:　スタート地点 g:　ゴール地点
    cin >> s >> g;
    vector<vector<edge>> graph = {{{1, 3}, {2, 7}, {3, 2}}, {{0, 3}, {2, 1}}, {{0, 7}, {1, 1}, {4, 1}}, {{0, 2}, {4, 4}}, {{2, 1}, {3, 4}}}; // 各辺の長さと接続先
    vector<int> dist(graph.size()); // スタート地点からそれぞれの節点までの最速距離を表す配列
    fill(dist.begin(), dist.end(), INT_MAX); // めちゃくちゃ大きい値で埋める処理
    dist[s] = 0; // スタート地点からスタート地点までの最速距離は0で固定
    priority_queue<cr_pair, vector<cr_pair>, greater<cr_pair>> que; // この書き方をすると昇順のキューになる
    // スタート地点からnコストである点につくルートにおいて、その点から接続先の点までのコストを計算、その時点で最短であればdistを更新
    que.push({0, s}); // 最初の現在地はスタート地点。{0: スタート地点から現在地までの距離, s: 現在地のindex}
    while(!que.empty()) 
    {
        cr_pair c = que.top();
        int d = c.first; // スタート地点から現在地までの距離
        int idx = c.second; // 現在地のindex
        que.pop();
        if (d > dist[idx]) // dist[idx]: 現時点でのidxまでの最速距離
            continue; // 最速距離を更新できないなら意味がないので打ち切り
        for (int i = 0; i < graph[idx].size(); i++)
        {
            int to = graph[idx][i].to; // graphの現在地から行けるi番目の節点のindex
            int cost = graph[idx][i].cost; // graphの現在地から行けるi番目の節点のcost
            if (d + cost < dist[to]) // スタート地点から現在地までの総コスト + i番目の節点に行くのにかかるコスト < 現時点でのスタート地点からi番目の節点までの最速距離
            {
                dist[to] = d + cost; // 新たな最速距離で更新
                que.push({dist[to], to}); //　　次の探索地点をキューに追加
            }
        }
    }

    cout << dist[g] << endl; // ある地点への最速距離はdistを見ればわかる
}
