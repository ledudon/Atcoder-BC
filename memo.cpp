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

    // 入力はその時の入力限界までではなく、その後の入力受付にも対応してくれる
    // char型の奴は計算式を挟んであげるとint型としても扱える
    // char型には文字としての数値を入れることができる ex) '1', '7'
    // string型はchar型の配列として扱うことが出来る
    // char型の数字は '0' = 48　'9' = 57 になってる 
    // 条件式 ? trueの時の値 : falseの時の値
    // ポインタ変数 -> ポインタ変数が指す構造体の要素 でポインタ変数から構造体の要素にアクセスできる
    // 2次元配列 vector<vector<型>> 名前(配列の高さ, vector<型>(配列の横幅, 初期値));
    // ラムダ式の書き方 auto 関数名 = [キャプチャリスト](パラメータリスト) mutable 例外仕様 属性 -> 戻り値の型 { 関数の本体 } 
    // キャプチャリスト [&] : その関数の外にある変数を参照して持ってこれる 
    //                 [=] : その関数の外にある変数をコピーして持ってこれる
    //                 [&, x] : 変数xのみコピー、そのほかは参照
    // function<返り値の型(引数の型1, 引数の型2, ...)> 関数名 = [&](引数の型1 引数名1, 引数の型2, 引数名2, ...) { 関数の処理 };
    // main(string[] args)はコマンドライン引数　プログラム実行時に追加で文字列を入力することで argsに収納してくれる
    // vector配列は引数として扱うと基本的に値渡しになる
    // array a[]の配列は引数として扱うと基本的に先頭のポインターの値が渡される
    // + や - の演算に特別な処理を持たせるときは　返り値の型 operator +(引数の型 引数){ 処理 }
    
    
    return 0;
}