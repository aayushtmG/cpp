#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int totalamt;
    float discountamt;
    cout << "Enter the total amount: " << endl;
    cin >> totalamt;

    if(totalamt >= 500){
        discountamt = (float)totalamt * 20 /100;
    }else if (totalamt >= 100 && totalamt < 500) {
        discountamt = (float)totalamt * 10 /100;
    }else{
        discountamt = 0;
        cout << "NO discount for you !!!"<< endl;
    }
    cout << "Discount: " << discountamt << endl;  
    totalamt = totalamt - discountamt;
    cout << "Total amount with discount: " << totalamt << endl;
    return 0;
}


