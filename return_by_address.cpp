#include <iostream>
using std::cout ,std::endl;

int *array_creator(int size){
    int *ptr = new int[size];
    for(int i = 0; i< size; i++){
        ptr[i] = i+1;
    }
    return ptr;
}

int main(){
    int size = 5;
    int *p = array_creator(size);
    for(int i = 0; i< size; i++){
        cout << p[i] <<endl;
    }
    return 0;
}
