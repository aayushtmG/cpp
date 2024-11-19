#include <iostream>
using std::cout, std::endl;

void recur(int n){
    if(n>=0){
        recur(n-1);
        cout << n << endl;
    }
}


int main(){
    int number = 5;
    recur(5);
    return 0;
}
