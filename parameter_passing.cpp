#include <iostream>
using std::cout, std::endl;

//passing by value
int swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

//passing by address
int swap(int *a,int *b){
  int temp;
  temp  = *a;
  *a = *b;
  *b = temp;
}

//passing by reference
int swap(int &a,int &b){
  int temp;
  temp  = a;
  a = b;
  b = temp;
}

int main(){
  int x = 5;
  return 0; 
}