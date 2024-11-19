//returning reference really weird
#include <iostream>
using std::cout ,std::endl;


int &func(int &a){//passing the reference and returning itself
    cout << a << endl;
    return a;
}
int main(){
    int x = 10;
    func(x) = 20; //func(x) returns the reference to the x so that we can assign new integer to it because func(x) is literally x.
    cout << x << endl;
    return 0;
}
