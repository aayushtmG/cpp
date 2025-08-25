#include <iostream>
using  std::cout;
int add(int x,  int y){
    return x + y;
}
int add(int x, int y){
    return x+y;
}
int max(int x, int y, int z){
    if(x > y  && x > z){
        return x;
    }else if(y > x && y > z){
        return y;
    }else{
        return z;
    }

}

int main(){
    // int x, y;
    
    int cmax = add(3,6);
    cout << cmax;
    return 0;
}