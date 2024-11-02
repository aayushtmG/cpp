#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int year;
    cout << "Enter the year: "<< endl;
    cin >> year;

    if(year % 100 == 0 && year % 400 == 0){
        cout << "Its a leap year!!" << endl;
    }else if(year % 100 != 0 && year % 4 == 0){
        cout << "Its a leap year!!" << endl;
    }else{
        cout << "Its not a leap year!!" << endl;
    }

    return 0;
}
