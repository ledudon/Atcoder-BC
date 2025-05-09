#include <iostream>
using namespace std;

int main(void){
  string S;
  cin >> S;
  
  int count = 0;
  char t;
  for(int i = 0; count < S.size(); i++){
    cin >> t;
    if(t == S.at(count)){
      cout << i+1 << " ";
      count++;
    }
  }
  cout << endl;
  
  return 0;
}