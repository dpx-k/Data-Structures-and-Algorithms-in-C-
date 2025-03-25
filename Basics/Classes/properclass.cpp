#include <iostream> 

using namespace std; 

class Rectangle{
    private: 
            int length; 
            int breadth; 
    
    public: 
            // default constructor 
            Rectangle(){ 
                length = breadth = 1; 
            }

            // parametrized constructor
            Rectangle(int l, int b){ 
                length = l; 
                breadth = b; 
            }

            int area(); 
            int perimeter(); 

            int getlength(){ 
                return length; 
            }

            void setlength(int l){
                length = l; 
            }

            ~Rectangle(); 
};

int Rectangle::area(){
    return length * breadth; 
}

int Rectangle::perimeter(){ 
    return 2+(length + breadth); 
}

Rectangle::~Rectangle(){ 

}

int main(){ 
    Rectangle r (10, 5); 
    cout << "Area: " << r.area() << endl; 
    cout << "Perimeter: " << r.perimeter() << endl; 
    r.setlength(69); 
    cout << "Length of the Rectangle: " << r.getlength() << endl; 
}