#include <iostream>
using namespace std;

int main(void){
  int N, x, y, z;
  cin >> N >> x >> y >> z;
  if(x > y){
    int tmp = x;
    x = y;
    y = tmp;
  }
  if(x < z && z < y) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}