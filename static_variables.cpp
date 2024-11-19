#include <iostream>
using std::cout, std::endl;

void fun(){
     static int v = 0; //static variables value are reserved just like global variables but are not accessible in global scope, they are scoped to only defined function 
    int a = 5;
    v++;
    cout << a << " " << v <<endl;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}
