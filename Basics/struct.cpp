#include <iostream> 

using namespace std; 

struct Rectangle{ 
    int length; 
    int breadth; 
    int area; 
}; 

int main(){ 
    
    Rectangle r1; 
    r1.length = 10; 
    r1.breadth = 20; 

    r1.area = r1.length * r1.breadth; 

    cout << r1.area; 
}
