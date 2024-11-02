#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Factors of " << number << ":" << endl;
    for(int i = 1; i <= number; i++){
        if(number % i == 0){
             cout << i << endl;
        }
    }
    return 0;
}

