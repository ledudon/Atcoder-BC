#include <bits/stdc++.h>
using namespace std;

int main(void){

    // earseは(begin, end)でbeginからendまでの範囲を削除する
    // uniqueは連続する重複要素を詰めて後ろに追いやり、追いやられた要素のイテレータを返す
    string s = "aaaabbbaabbbbssss";
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s << endl;

    // lower_boundは二分探索でkey以上の最初の要素のイテレータを返す
    // ただし、sortされている必要がある
    // また、set等のデータ構造上ランダムアクセスが難しいものに対しては時間がかかる
    // オブジェクトごとに用意されたlower_boundを使うとよい
    vector<int> v = {7, 2, 9, 6, 8, 0, 1, 3, 5, 4};
    sort(v.begin(), v.end());
    auto Iter = lower_bound(v.begin(), v.end(), 5);
    cout << *Iter << endl;

    // next_permutation(開始位置, 終了位置)
    // 対象の配列の辞書順の次に当たる並び替えを行う
    // 並び替えができるかどうかをbool型で返す
    // do-while文を利用して使うとよい
    // 並び替えの列挙を行う場合は昇順のsortを事前に行っておく
    sort(s.begin(), s.end());
    do{
        for(auto c : s) cout << c << " ";
        cout << endl;
    }while(next_permutation(s.begin(), s.end()));

    // string型変数.compare(比較対象) で文字列を辞書順に比較し、その差を返す
    // A.compare(B)でAの方が辞書順が早い場合、今回はマイナスの値が返される(Aの方が早いので)

    // map型変数 Aのkeyを取り出したい場合は A.firstとするといい
    // mapにそのkeyが含まれてるかを判定するにはA.find(key)もしくはA.count(key)として数値を比較する
    // A.at(key)としてkeyが含まれていなかった場合例外処理となるため注意
    map<string, int> testMap = {{"A", 1}, {"B", 3}};
    if(testMap.count("C") == 0) cout << testMap.size() << endl;
    
    // find(a.begin(), a.end(), 値)で 値がaにある場合そのイテレータを、無い場合a.end()を返す
    // 返り値がイテレータなため、配列番号が欲しい時は distance(a.begin(), find(a.begin(), a.end(), 値))とするといい
    
    
    return 0;
}