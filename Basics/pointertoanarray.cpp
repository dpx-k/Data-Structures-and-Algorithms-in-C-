#include <iostream> 

using namespace std; 

int main(){ 
    int A[5] = {10, 20, 30, 40, 50}; 

    int *p; 
    p = A; //name of the address is the starting point of the array 
    p = &A[0]; // same as above 

    for(int i=0; i<5; i++){
        printf("%d ", p[i]); //prints the elements 
    }
}