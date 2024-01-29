#include <iostream>
using namespace std;

int main() {
  const int *a = new int(5);
  int b = 10;
  a = &b;
  cout<<*a<<endl;
  
  return 0;
}