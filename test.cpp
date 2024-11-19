#include <iostream>
using std::cout , std::endl;
void how_pointer_work(int *x){// input is given as &x this will give the memory of the x and only pointer can store the memory address
    cout << x << endl;// this give the memory address pointed by the pointer
    cout << &x << endl;//this gives the memory address of the pointer itself
    cout << *x << endl;// * -> this will give you the value holded by the memory addresss that is being pointed

}

int main(){
    int x =20;
    cout << &x << endl;
    how_pointer_work(&x);

}

