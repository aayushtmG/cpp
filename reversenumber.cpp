#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int number;
    int revnumber = 0; 
    cout << "Enter the number: ";
    cin >> number;
    while( number > 0){
        int rem = number % 10;
        number /= 10;
        revnumber = revnumber * 10 + rem;
    }
        cout << " The reversed number is: " << revnumber  << endl;
    return 0;
}

