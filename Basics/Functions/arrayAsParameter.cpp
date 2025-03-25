#include <iostream> 

using namespace std; 

// passing array as a parameter to the main function
void fun(int A[], int size){ 
    cout << "\nThis is displayed by the fun function: " << endl; 
    for(int i=0; i<size; i++){
        cout << A[i] << " ";
    }
}

void pointerArray(int *A, int size){ 
    // since array is passed as a pointer, it makes changes to the array in the main function
    A[3] = 15; 
    cout << "\nThis is displayed by the pointerArray function: " << endl; 
    for(int i=0; i<size; i++){
        cout << A[i] << " ";
    }
}

// returning array to the main function 
int * giveArray(int size){ 
    int *p, *q; 
    p = (int *) malloc(size * sizeof(int)); //manually allocate in heap memory
    q = new int [size]; // c++ style which handles allocation automatically
    
    for(int i=0; i<size; i++){ 
        p[i]= i + 1; 
    }

    return (p); 
}

int main(){ 
    int size = 5; 
    int A[size] = {10, 20, 30, 40, 50}; 
    fun(A, size); 
    pointerArray(A, size); 

    // this for each loop cannot be run inside a function as an array is passed as a pointer 
    cout << "\nThis is displayed by the main function: " << endl; 
    for(int a : A){
        cout << a << " "; 
    }

    cout << "\nThis is displayed by the giveArray function: " << endl; 
    int *newArr = giveArray(10); 
    for(int i= 0; i<10; i++){ 
        cout << newArr[i] << " "; 
    }
    
}
