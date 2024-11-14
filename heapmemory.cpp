#include <iostream>
using std::cin, std::cout, std::endl;


int main(){
    int *array = new int[20];
    cout << array <<endl;

    delete []array; //delete the int[20] from the memory so that pointer can point to new memory address
    array = new int[40];
    cout << array << endl;


}

//notes: 
// array will point to the memory address of the first array element
//for(int x = 0 ; x < 3; x++ ){
//    cout << *(array + x)<<endl; 
//}
// thats why i am adding 1 to access the next element from the first of the array


