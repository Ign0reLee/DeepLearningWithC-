#include <iostream>
#include <stdlib.h>
#include <device_launch_parameters.h>
#include <cuda_runtime.h>

using namespace std;


int main() {

    float *A, *B, *C;
    int N = 100;
    cudaMalloc((void**)&A, N*N*sizeof(float));
    cudaMalloc((void**)&B, N*N*sizeof(float));
    cudaMalloc((void**)&C, N*N*sizeof(float));
    
    float *a = (float *)malloc(N*N*sizeof(float));
    float *b = (float *)malloc(N*N*sizeof(float));
    float *c = (float *)malloc(N*N*sizeof(float));

    cudaMemcpy(A, a, N * N * sizeof(*A), cudaMemcpyHostToDevice);
    cudaMemcpy(B, b, N * N * sizeof(*B), cudaMemcpyHostToDevice);
    
}

__global__ void MatAdd(float A[N][N], float B[N][N], float C[N][N])
{
    int i = threadIdx.x;
    int j = threadIdx.y;
    C[i][j] = A[i][j] + B[i][j];
};