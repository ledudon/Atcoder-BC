#include <iostream>
using namespace std;

int main(void){
  char tmp;
  cin >> tmp >> tmp >> tmp;
  int n;
  cin >> n;
  
  if(n > 0 && n < 350 && n != 316) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}