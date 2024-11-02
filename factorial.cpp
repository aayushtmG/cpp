#include "iostream"
using std::cout, std::cin, std::endl;

int main(){

    int number;
    int fact = 1 ;
    cout << "Enter the number: ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        fact *= i;
    }
    cout << "Factorial: "<< fact << endl;
    return 0;
}
