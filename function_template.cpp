// Generic or function template
#include <iostream>
using std::cout,std::endl;

template<class t>
t add(t x, t y){
    return x + y;
}

int main(){
    float fsum; int isum;
    isum = add(2,5);
    fsum = add(2.5f ,2.5f);
    cout << fsum << endl << isum << endl;
return 0;
}
