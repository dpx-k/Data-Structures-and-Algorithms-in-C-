#include <iostream> 

using namespace std; 

struct Rectangle{ 
    int length; 
    int breadth; 
    char x; // occupies 4 bytes instead of 1 due to padding 
} r1, r2, r3;  // you can declare variables along with the definition 

// or you can declare outside the main fucntion giving it global scope 
// struct Rectangle r1, r2, r3 

int main(){

    int area; 

    cout << "Hello World!" << endl;

    struct Rectangle rect1 = {10, 5};
    cout << "Size of rectangle: " << sizeof(r1) << " Bytes" << endl;  
    
    cout << "Length: " << rect1.length << endl; 
    cout << "Breadth: " << rect1.breadth << endl; 

    area = rect1.length * rect1.breadth; 

    cout << "Area: " << area; 

}