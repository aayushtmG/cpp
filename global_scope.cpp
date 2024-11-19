//accessing global scope variable
#include <iostream>
using std::cout,std::endl;

int x= 20;

int main(){
    int x =30;
    cout << x <<endl;// this will print its scope x i.e 30;
    cout << ::x<< endl; // :: will try to get the global variable;
    return 0;
}
