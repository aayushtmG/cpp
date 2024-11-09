#include <iostream>
using std::cin, std::cout, std::endl;
int main(){
    //Enter the integer value and find its character 
    //0-31 are non printable characters
    //there are 255 characters for unsigned
    cout << "Enter 0 to quit!" <<endl; 
    while(true){
        int character;
        cout << "char: ";
        cin >> character;
        if(character == 0){
            break;}
        cout << (char)character << endl;;
    }
    return 0;
}
