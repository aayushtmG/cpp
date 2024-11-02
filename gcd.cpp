#include "iostream"
using std::cout, std::cin, std::endl;

int main(){
    int m;
    int n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    while( m != n){
        if(m > n){
            m = m -n;
        }else{
            n = n -m;
        }
    }
        cout << " The GCD is: " << m  << endl;
    return 0;
}

