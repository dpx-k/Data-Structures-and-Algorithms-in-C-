#include <iostream> 

using namespace std; 

struct rectangle{
    int length; 
    int breadth; 
};

int main(){ 
    struct rectangle r = {10, 20}; 
    struct rectangle *p = &r; 

    // to access the structure using pointer
    (*p).length = 20 ; // it has to be enclosed within brackets coz precedence is given to the dot operator first
    cout << r.length << endl; 


    // a more convinient way would be
    p -> length = 69; 
    cout << r.length << endl; 

    /* Creating a object from the struct rectangle dyanmically in the heap memory*/
    struct rectangle *q;  
    q = (struct rectangle *)malloc(sizeof(struct rectangle)); 
    q -> length = 30; 
    q -> breadth = 20; 

    cout << "length: " << q -> length << endl; 
    cout << "breadth: " << q -> breadth << endl; 

    /* Key points: 
        struct isn't necessary to be specified in main function while creating the object 
        instead of malloc for manual allocation you can do(only in cpp): */

    rectangle *s = &r; 
    s = new rectangle; 
    s -> length = 3480; 
    s -> breadth = 242; 

    cout << "length: " << s -> length << endl; 
    cout << "breadth: " << s -> breadth << endl;

}