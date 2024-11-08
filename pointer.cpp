#include <iostream>
using std::cin, std::cout, std::endl;


int main(){
   int x = 20;
    int *pointer = &x;
    cout << " x: "<< x << " memory: " << &x << endl;
    cout << " x pointer: "<< *pointer << " memory: " << &pointer << endl;
}


