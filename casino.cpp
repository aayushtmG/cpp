#include <iostream>
using std::cin , std::cout, std::endl,std::string;

string getName();
int getBet( int balance);
const int INIT_BALANCE = 200;

int main(){
     int balance = INIT_BALANCE;
    string name =  getName();
     int bet = getBet(balance);
    return 0;
}


string getName(){
    string name;
    cout << "Welcome to the Casino" <<endl;;
    cout << "Enter your name: ";
    cin >> name;
    if(name.size() == 0 ){
        return "";
    }
    cout << "Welcome " << name << ",let's play!!" << endl;     
    return name;
}

 int getBet( int balance ){
     int bet;
    cout << "Balance: " << balance<< endl;
    while(true){
        cout << "Enter your bet, or 0 to quit: "; 
        cin >> bet; 
        if(bet < 0){
            cout << "!!Bet cannot be less than 0, Enter again!!" <<endl; 
        }else if(bet > balance){
            cout << "!!Bet cannot be greater than balance!!"<< endl;
        }else{
            break;
        }

    }
    return bet;
}
