#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int N;
    cin >> N;
    
    int count = 0;
    vector<int> num(N+1);
    vector<int> order(N+1);
    vector<pair<int, int>> ans;
    for(int i = 1; i <= N; i++){
        cin >> num[i];
        order[num[i]] = i;
    }
    for(int i = 1; i <= N; i++){
        if(order[i] != i){
            ans.push_back({order[i], i});
            
        }
    }
    
    return 0;
}
