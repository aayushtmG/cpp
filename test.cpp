#include <iostream>
using std::cout , std::endl;
void fun(int &x, int &y);

int main(){
    int A[5]{1,2,3,4,5};
    int x = 20;
    int &y = x;
    cout << y<< endl;
    return 0;
}

