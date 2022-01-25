#include <stdio.h>
#include <iostream>
#include <cuda_runtime.h>

using namespace std;

__global__ void kernel(void) {

}

int main() {
    kernel <<< 1,1 >>> ();
    cout << "Hello World!" << endl;
}