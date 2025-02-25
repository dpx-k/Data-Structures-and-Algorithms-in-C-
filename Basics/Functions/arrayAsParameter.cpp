#include <iostream> 

using namespace std; 

// passing array as a parameter to the main function
void fun(int A[], int size){ 
    for(int i=0; i<size; i++){
        cout << A[i] << endl;
    }
}

// returning array to the main function 
int * giveArray(int size){ 
    int *p, *q; 
    p = (int *) malloc(size * sizeof(int)); //manually allocate in heap memory
    q = new int [size]; // c++ style which handles allocation automatically
    return (p); 
}

int main(){ 
    int size = 5; 
    int A[size] = {10, 20, 30, 40, 50}; 
    fun(A, size); 

    int *newArr = giveArray(10); 
    
}
