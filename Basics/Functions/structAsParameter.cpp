#include <iostream> 

using namespace std; 

struct Rectangle{
    int length; 
    int breadth; 
}; 

void passByValue(struct Rectangle r){ 
    r.length = 20;
    r.breadth = 10 ;

    cout << r.length << " " << r.breadth <<endl; 
}

void passByAddress(struct Rectangle *p){ 
    p -> length = 69;
    
    cout << p->length << endl; 
}

void passByAddress(struct Rectangle &r){

}

int main(){ 
    Rectangle r = {10, 5};

    passByAddress(&r); 
    passByValue(r);
    cout << r.length << " " << r.breadth; 

}