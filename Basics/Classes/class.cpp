#include <iostream> 

using namespace std; 

class Rectangle { 
    private: 
            int length; 
            int breadth; 
    
    public: 
            Rectangle(int l, int b){
                length = l; 
                breadth = b; 
            }

            int area(){ 
                return length * breadth; 
            }

            void changlength(int l){
                length = l; 
            }
};

int main(){ 
    Rectangle r(10,20); 
    r.area(); 
    r.changlength(23); 

}