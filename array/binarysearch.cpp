#include <iostream>
using std::cout, std::cin, std::endl;

int main(){
    int arr[8]= {5,12,18,19,23,45,56,58};
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    int left = 0;
    int right = 7; 
    while(left <= right){
        int mid = (left +right)/2;
        if(arr[mid] == num){
            cout << "Found number on: " << mid << endl;
            return 0;
        }
        if(num > arr[mid]){
            left = mid + 1;
        }else if(num < arr[mid]){
            right = mid -1;
        }
    }
    cout << "Number not found!!!" << endl;
    return 0;
}
