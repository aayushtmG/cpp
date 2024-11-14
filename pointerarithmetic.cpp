//arithmetic operation on pointer
#include <iostream>
using std::cin,std::cout, std::endl;

int main(){
    int A[5] = {1,2,3,4,5};
    int *p = A;
    int *q = &A[3];
    cout << "q: " << q << endl;
    cout << "p: " << p << endl;
    cout << p-q << endl;
}
//opeartions with pointer:
//p++;
//p--;
//p= p+2;
//p= p-2;
//d = p-q;


