#include <iostream>
using std::cout, std::cin, std::endl;
int main(){
    float basicSalary;
    float allowances;
    float deductions;
    float netSalary;

    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter percentage of allowances: ";
    cin >> allowances;
    cout << "Enter percentage of deductions: ";
    cin >> deductions;
    netSalary = basicSalary + basicSalary * allowances/100 - basicSalary * deductions/100;
    cout << "Your Net Salary is: " << netSalary<< endl; 
return 0;
}
