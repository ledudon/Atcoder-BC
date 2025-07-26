    #include <bits/stdc++.h>
    #define rep(i, a, b) for(int i = a; i < b; i++)
    #define all(x) (x).begin(),(x).end()
    typedef long long ll;
    using namespace std;

    int main(void){
        string s;
        cin >> s;

        // 0は○の外側 1は内側でシャープを挟んでない 2は内側でシャープ挟んでる
        int state = 0;

        string t = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#') t += '#';
            else t += '.';

            if(state == 0 && s[i] == '.'){
                t[i] = 'o';
                state = 1;
            }
            if(state == 1 && s[i] == '#') state = 2;
            if(state == 2 && s[i] == '.'){
                t[i] = 'o';
                state = 1;
            }
        }
        if(state == 1) t[s.size()] = s[s.size()];

        cout << t << endl;
        
        return 0;
    }