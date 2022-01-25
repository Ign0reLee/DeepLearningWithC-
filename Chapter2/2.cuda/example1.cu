#include <iostream>
#include <stdio.h>
#include <device_launch_parameters.h>
#include <cuda_runtime.h>

using namespace std;

__global__ void VecAdd(float* A, float* B, float* C)
{
    int i = threadIdx.x;
    C[i] = A[i] + B[i];
}

int main()
{

    // Kernel invocation with N threads
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

    VecAdd<<<1, N>>>(A, B, C);

    cudaMemcpy(c, C, N * N * sizeof(*C), cudaMemcpyHostToDevice);

    cudaFree(A) ; cudaFree(B) ; cudaFree(C) ;

}