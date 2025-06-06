#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minOperationsToMergeOneBlocks(const string& S) {
    int N = S.size();
    vector<int> gaps; // 1の区間間の0の長さ
    int i = 0;

    // 1の区間を検出
    while (i < N && S[i] == '0') ++i;

    if (i == N) return 0; // 1がないなら操作不要

    int block_count = 0;
    while (i < N) {
        // 1の区間スタート
        ++block_count;
        while (i < N && S[i] == '1') ++i;

        // 0の区間（gap）を数える
        int gap = 0;
        int j = i;
        while (j < N && S[j] == '0') {
            ++gap;
            ++j;
        }

        if (j < N) {
            gaps.push_back(gap); // 次も1があるならgap有効
        }
        i = j;
    }

    if (block_count <= 1) return 0;

    // K-1個のギャップを0→1に変えて連結する
    sort(gaps.begin(), gaps.end());
    int min_ops = 0;
    for (int k = 0; k < block_count - 1; ++k) {
        min_ops += gaps[k]; // 小さいgapから使う
    }

    return min_ops;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        cout << minOperationsToMergeOneBlocks(S) << '\n';
    }

    return 0;
}
