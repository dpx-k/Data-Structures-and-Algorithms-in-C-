#include<iostream> 
#include<stdlib.h>

using namespace std; 

int main(){ 

    int *p; 
    p = (int *) malloc(5*sizeof(int)); // allocates specified size in the heap memory, C style

    int *q; 
    q = new int[3]; //does the same as above but this is specific to C++
    q[0] = 99; q[1] = 100; q[2]= 200; 

    cout << "Elements: " << endl; 
    for(int i=0; i<3; i++){ 
        cout << q[i] << " "; 
    }

    cout << endl <<"Enter the elements of the array: "; 
    for(int i=0; i<5; i++){ 
        cin >> p[i]; 
    }

    cout << "Elements: " << endl; 
    for(int i=0; i<5; i++){ 
        cout << p[i] << " "; 
    }

    delete []p; //frees up the memory occupied by the array, in C
    free(q); //does the same thing but in Cpp

    cout << endl << "Elements: " << endl; 
    for(int i=0; i<3; i++){ 
        cout << q[i] << " "; 
    }

    cout << endl << "Elements: " << endl; 
    for(int i=0; i<5; i++){ 
        cout << p[i] << " "; 
    }
}