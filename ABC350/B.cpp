#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int N, Q;
  cin >> N >> Q;
  
  vector<bool> dent(N, true);
  int ans = N;
  int t;
  for(int i = 0; i < Q; i++){
    cin >> t;
    if(dent.at(t-1)){
      dent.at(t-1) = false;
      ans--;
    }
    else
    {
      dent.at(t-1) = true;
      ans++;
    }
  }
  
  cout << ans << endl;
  
  return 0;
}