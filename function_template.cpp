// Generic or function template
#include <iostream>
using std::cout,std::endl;

template <class T>
T max(T a, T b){
    return a>b ? a : b;
}

int main(){
    int a = 20;
    int b = 30;
    cout << max(a,b) << " is bigger" << endl;
    float c = 3.5;
    float d = 3.2;
    cout << max(c,d) << " is bigger" << endl;
    return 0;
}
