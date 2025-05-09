// 解説：https://blog.hamayanhamayan.com/entry/2021/08/09/010106
// 今回やる問題は座標圧縮を使う問題
// Aを行、Bを列として扱い、入力された座標をそれぞれ格納、
// それぞれで座標圧縮を行い、結果を出力する

#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int H, W, N, A[101010], B[101010];
int main(void) {
	cin >> H >> W >> N;
	rep(i, 0, N) cin >> A[i] >> B[i];

	vector<int> ys;
	rep(i, 0, N) ys.push_back(A[i]);
	sort(all(ys));
    // 重複する要素を消す
	ys.erase(unique(all(ys)), ys.end());
    // Aに格納されているi番目の要素の座標圧縮後のイテレータを格納する
	rep(i, 0, N) A[i] = lower_bound(all(ys), A[i]) - ys.begin();

	vector<int> xs;
	rep(i, 0, N) xs.push_back(B[i]);
	sort(all(xs));
	xs.erase(unique(all(xs)), xs.end());
	rep(i, 0, N) B[i] = lower_bound(all(xs), B[i]) - xs.begin();

	rep(i, 0, N) printf("%d %d\n", A[i] + 1, B[i] + 1);
}