#include <iostream>

using namespace std;

int main(){
  int n = 1;
  int& rn =  n; // 参照型
  int* pn = &n; // ポインタ型

  cout << n << endl;
  rn += 10;
  cout << n << endl;
  *pn += 20;
  cout << n << endl;

  return 0;
}
