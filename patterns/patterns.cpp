#include <iostream>
#include <cstdlib>
using std::cout, std::endl;

void first_pattern(){
    int count = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           cout << count++  << " ";
        }
       cout <<  endl;
    }
}
void second_pattern(int length = 4){
    for(int i = 1; i <= length; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void third_pattern(int length = 4){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(i <= j){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
void fourth_pattern(int length = 4){
    //my solution
    /*for(int i = length -1  ; i >= 0; i--){
        for(int j = 0; j < length; j++){
            if(i <= j){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }*/
    for(int i = 0  ; i < length; i++){
        for(int j = 0; j < length; j++){
            if(i+j >= length-1 ){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

}



int main(int argc,char *argv[]){
    if(argc < 2){
        cout << "Please provide the pattern number!!" << endl; 
        return 0; 
    }
    int pattern = std::atoi(argv[1]);
    switch(pattern){
        case 1: 
            first_pattern();
            break;
        case 2:
            second_pattern();
            break;
        case 3: 
            third_pattern();
            break;
        case 4:
            fourth_pattern();
            break;
        default:
            cout << "Invalid pattern number" << endl;
    }
    return 0;
}

