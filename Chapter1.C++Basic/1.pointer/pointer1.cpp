#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    float *a = (float *)malloc(sizeof(float) * 5);
    float *b = a+2;
    free(a);
}
