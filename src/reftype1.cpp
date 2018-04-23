#include <iostream>

using namespace std;

void add10(int *n){
  *n += 10;
  cout << "add10: pointer" << endl;
}

void add10(int &n){
  n += 10;
  cout << "add10: reference" << endl;
}

int main(){
  int a = 1;
  
  cout << a << endl;
  add10(&a);
  cout << a << endl;
  add10(a);
  cout << a << endl;
  
  return 0;
}
