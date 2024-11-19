// Example of method overloading
#include <iostream>
using std::cout, std::endl;

int add(int a, int b){
    return a+b;
}

int add(int a, int b,int c){
    return a+b+c;
}


int main(){
    int a = 20;
    int b =30;
    int c=50;
    cout << "Add with two arguments: " << add(a,b) <<endl;
    cout << "Add with three arguments: " << add(a,b,c) <<endl;
    return 0;
}
