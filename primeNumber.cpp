#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int number;
    int count = 1; 
    cout << "Enter the number: ";
    cin >> number;
    for(int i = 2; i <= number; i++){
        if( count > 2){
            cout << number << " is not a Prime number" << endl;
            return  0;
        }
        if(number % i == 0){
            count++;
        }
    }
            cout << number << " is a Prime number" << endl;

    return 0;
}

