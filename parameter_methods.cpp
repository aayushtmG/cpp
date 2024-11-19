/*ways of passing parameters in cpp
    1.passing by value
    2.passing by memory address
    3.passing by reference 
*/
#include <iostream>
using std::cout,std::endl;

void swap_by_value(int x , int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    // this will swap the value but it will only stay on this function scope,it will not sawp the passed actual parameters
}
void swap_by_reference(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    //this is taking the reference and actually pointing to the real varialbe out of the scope so this will successfully swap
}

void swap_by_memory_address(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 20;
    int b = 50;
    swap_by_memory_address(&a,&b);
    cout << a << " " << b << endl;
    return 0;
}
