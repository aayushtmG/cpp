#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int number;
    int sum = 0;
    cout << "Enter the number: ";
    cin >> number;
    int tempNum = number;
    while( tempNum > 0){
        int r = tempNum % 10;
        tempNum = tempNum /10;
        sum  +=  r*r*r;
        cout << sum <<endl;
    }
    if(sum == number){
        cout << number << " is Armstrong number" << endl;
    }else{
        cout << number << " is not an Armstrong number" << endl;
    }
    return 0;
}

