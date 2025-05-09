#include <iostream>
#include <stack>
using namespace std;

bool check(stack<int> ball, int n){
    if(ball.empty()) return false;
    return ball.top() == n;
}

int main(){
    int N;
    cin >> N;

    int topNum;
    stack<int> ball;
    for(int i = 0; i < N; i++)
    {
        cin >> topNum;
        while(check(ball, topNum) == true)
        {
            ball.pop();
            topNum++;
        }
        ball.push(topNum);
    }
    std::cout << ball.size() << endl;


    return 0;
}