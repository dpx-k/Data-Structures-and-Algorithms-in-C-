#include <iostream> 

using namespace std; 

template <class T>
class Arithmetic{
    private: 
        T a; 
        T b; 

    public: 
        Arithmetic(T a, T b);
        T add(); 
        T sub(); 
}; 

template <class T> 
Arithmetic<T> :: Arithmetic(T a, T b){ 
    this -> a = a; 
    this -> b = b; 
}

template <class T> 
T Arithmetic<T> :: add(){
    T c; 
    c = a + b; 
    return c; 
}

template <class T> 
T Arithmetic <T> :: sub(){ 
    T c; 
    c = b - a; 
    return c; 
}


int main(){ 
    Arithmetic <float> ar (10.34,52.67); 
    cout << ar.add() << endl; 
    Arithmetic <int> fl (10,20); 
    cout << fl.add() << endl; 
}