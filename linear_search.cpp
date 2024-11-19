#include <iostream>
using std::cout, std::endl;

int search(int arr[],int size,int target){
    for(int i = 0;i < size; i++)
        if(arr[i] == target)
            return i;
    return -1;
}

int main(){
    const int size = 5;
    int target = 5;
    int array[size] ={1,2,3,4,5};
    int index = search(array,size,target);
    cout << "Found at: " << index <<endl;
     return 0;
}

