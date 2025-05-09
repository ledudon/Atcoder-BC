#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int N;
  cin >> N;
  
  vector<long long> a(N),  b(N);
  for(int i = 0; i < N; i++) cin >> a.at(i) >> b.at(i);
  long long m = 0;
  for(int i = 0; i < N; i++) m = max(m, b.at(i) - a.at(i));
  long long ans = m;
  for(int i = 0; i < N; i++) ans += a.at(i);
  cout << ans << endl;
  
  return 0;
}