#include <iostream>
#include <stdlib.h>
#include "variable.h" // Future make variable.h
using namespace std;


int main(){
    Variable *v = new Variable (2, 7);// Variable is class name in variable.h 
    v -> backward(); // Variable's member function
    delete v;
}
s