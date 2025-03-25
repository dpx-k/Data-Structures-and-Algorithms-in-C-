#include <iostream> 

using namespace std; 

struct circle{ 
    float diameter; 
    float radius = diameter / 2; 
    float area = radius * radius * 3.14; 
    float circumference = 2 * 3.14 * radius; 
};

struct circle* round() {  
    struct circle* p = new circle;  

    // C syntax for creating a pointer and allocating memory 
    // struct circle* q; 
    // q = (struct circle* ) malloc(sizeof(struct circle)); 

    p -> diameter = 17 ;
    return p;  // Return the allocated memory

}


int main(){ 
    circle c = {10}; 

    cout << "Diameter: " << c.diameter << endl; 
    cout << "Radius: " << c.radius << endl; 
    cout << "Circumference: " << c.circumference << endl; 
    cout << "Area: " << c.area << endl;

    cout << endl; 

    // the calulations will be initialised to zero default member initializations do not update when the value of diameter changes
    // create a constructor inside the struct circle and put in the calculations inside the constructor to fix it 
    circle *ptr = round(); 
    cout << "Diameter: " << ptr -> diameter << endl; 
    cout << "Radius: " << ptr -> radius << endl; 
    cout << "Circumference: " << ptr -> circumference << endl; 
    cout << "Area: " << ptr -> area << endl;
}