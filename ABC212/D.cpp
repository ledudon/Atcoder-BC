#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void){
    int Q;
    cin >> Q;
    priority_queue<long long, vector<long long>, greater<long long>> q;
    long long sum = 0;
    for(int i=0; i<Q; i++){
        int p, x;
        cin >> p;
        if(p == 1){
            cin >> x;
            q.push(x - sum);
        }else if(p == 2){
            cin >> x;
            sum += x;
        }else{
            cout << q.top() + sum << endl;
            q.pop();
        }
    }


    return 0;
}