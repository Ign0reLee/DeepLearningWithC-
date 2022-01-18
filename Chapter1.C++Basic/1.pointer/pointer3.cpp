#include <iostream>
#include <stdlib.h>
using namespace std;

void plus_one(float &b){
    b += 1;
}

int main(){
    float a = 10;
    cout << a << endl;
    plus_one(a);
    cout << a << endl;
}
