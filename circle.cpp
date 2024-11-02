#include <iostream>
using std::cout , std::cin, std::endl;

int main(){
    float radius;
    float area;
    cout << "Enter the radius: "; 
    cin >> radius;
    area = 3.1425*radius*radius ;
    cout << "Area of the circle: " << area << endl; 
   return 0; 
}

