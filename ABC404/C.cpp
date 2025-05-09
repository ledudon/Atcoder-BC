#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

struct Node{
    vector<int> con;
};

struct UnionFind {
    std::vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    
    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }
    
    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    
    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }
    
    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(void){
    int N, M;
    cin >> N >> M;
    vector<Node> nodes(N);
    UnionFind uf(N);
    rep(i, 0, M){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(uf.same(a, b) && i != M-1){
            cout << "No" << endl;
            return 0;
        }
        uf.unite(a, b);
        nodes[a].con.push_back(b);
        nodes[b].con.push_back(a);
    }

    rep(i, 0, N){
        if(nodes[i].con.size() != 2){
            cout << "No" << endl;
            return 0;
        }
    }

    rep(i, 1, N){
        if(!uf.same(0, i)){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    
    return 0;
}