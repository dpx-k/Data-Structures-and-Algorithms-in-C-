#include <iostream> 

using namespace std; 

struct rectangle { 
    int length; 
    int breadth; 
}; 

void initialise(struct rectangle *r, int l, int b){
    r -> length = l; 
    r -> breadth = b; 
}

int area(struct rectangle r){ 
    return r.length * r.breadth; 
}

void changelength(struct rectangle *r, int l){ 
    r -> length = l; 
}

void printdetails(struct rectangle *r){ 
    cout << "Length: " << r -> length << endl; 
    cout << "Breadth: " << r -> breadth << endl; 
}


int main(){ 
    rectangle r; 
    initialise(&r, 10, 5); 
    area(r); 
    changelength(&r, 16); 
    printdetails(&r); 
}