#include <iostream> 

using namespace std; 

int main(){ 
    int a = 10; 
    int &r = a; 

    cout << a << endl << r << endl; 

    r = 12; // value of 'a' changes too 
    cout << a; 
}