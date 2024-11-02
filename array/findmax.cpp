#include <iostream>
using std::cin,std::cout, std::endl;

int main(){
    int Arr[5];
    int max = 0;
    for(int i =0 ; i < 5; i++){
        cout << "Enter number for " << i << "th index: ";
        cin >> Arr[i];
    }
    for(int x: Arr){
    if( x > max){
            max = x;
    }
    }
    cout << "Max number is the array is: " << max << endl;

    return 0;
}


