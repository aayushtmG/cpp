#include <iostream>
using std::cout, std::endl;

int & fun(int &a){
  a++; 
  cout << a <<endl;
  return a;
}


int main(){
  int x = 10;
  fun(x)++;
  cout << x << endl;
  return 0;
}
