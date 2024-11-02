#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int number;
    int revnumber = 0; 
    cout << "Enter the number: ";
    cin >> number;
    int tempNumber = number;
    while( number > 0){
        int rem = number % 10;
        number /= 10;
        revnumber = revnumber * 10 + rem;
    }
    if(tempNumber == revnumber){
        cout << "The number " << tempNumber << " is palindrome"  << endl;
    }else{
        cout << "The number " << tempNumber << " is not palindrome"  << endl;
    }
    return 0;
}

