#include<iostream>

using namespace std; 

void swap(int &x, int &y){ // pass addresses to the function
    
    int temp; 
    temp = x; 
    x = y; 
    y = temp; 
}

int main(){ 
    int a, b;
    a = 10; b = 20;  
    cout << "Number 1: " << a << endl << "Number 2: " << b << endl; 
    swap(a, b); 
    cout << "Number 1: " << a << endl << "Number 2: " << b << endl; 

}