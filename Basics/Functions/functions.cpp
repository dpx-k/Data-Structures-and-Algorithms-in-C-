// call by value
// suitable for situations where a function performs a computation and returns some result 

#include <iostream> 

using namespace std; 

int add(int a, int b){ 
    int c = a + b; 
    return c; 
}

int main(){ 
    int a = 10; 
    int b = 20; 
    
    int sum = add(a, b); 

    cout << "Sum: " << sum; 

}