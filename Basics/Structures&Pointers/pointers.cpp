#include <iostream> 

using namespace std; 

int main(){ 

    int a = 10; 
    cout << a << endl; 

    int *p = &a; 
    cout << *p << endl; // prints the contents of a
    cout << p << endl; // prints the address of which the pointer is pointing to 
    cout << &a << endl; // prints the address of a 

    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", &a);

}