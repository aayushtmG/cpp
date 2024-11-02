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
void fifth_pattern(int length = 4){
    //triangle pattern
    for(int i = 0; i < length ; i++){
        cout << ' ';
    }
    cout << '*'<< endl;
    for(int i = 0  ; i < length; i++){
        for(int j = 0; j < length; j++){
            if(i+j >= length-1 ){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << '*';
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void sixth_pattern(int length = 4){
    //flipped triangle
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(i <= j){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(int j = length; j >= 0; j--){
            if(i <= j){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = 0; i < length ; i++){
        cout << ' ';
    }
    cout << '*'<< endl;
}
void seventh_pattern(int length = 4){
    //diamond shape
    fifth_pattern(length); 
    sixth_pattern(length);
}




int main(int argc,char *argv[]){
    if(argc < 2){
        cout << "Please provide the pattern number!!" << endl; 
        return 0; 
    }
    int pattern = std::atoi(argv[1]);
    int* length = nullptr;
    if(argc > 2){
       length =  new int(std::atoi(argv[2])); 
    }
    switch(pattern){
        case 1: 
            first_pattern();
            break;
        case 2:
            if(length != nullptr){
                second_pattern(*length);
            }else{
                second_pattern();
            }
            break;
        case 3: 
            if(length != nullptr){
                third_pattern(*length);
            }else{
                third_pattern();
            }
            break;
        case 4:
            if(length != nullptr){
                fourth_pattern(*length);
            }else{
                fourth_pattern();
            }
            break;
        case 5:
            if(length != nullptr){
                fifth_pattern(*length);
            }else{
                fifth_pattern();
            }
            break;
        case 6:
            if(length != nullptr){
                sixth_pattern(*length);
            }else{
                sixth_pattern();
            }
            break;
        case 7:
            if(length != nullptr){
                seventh_pattern(*length);
            }else{
                seventh_pattern();
            }break;
        default:
            cout << "Invalid pattern number" << endl;
    }
    return 0;
}

