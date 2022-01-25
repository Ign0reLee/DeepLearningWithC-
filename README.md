# DeepLearningWithC++

- Book : \[[Link](http://www.yes24.com/Product/Goods/61934525)\]
- Reference Site : \[[Link](http://book.mynavi.jp/supportsite/detail/9784839961503.html)\]
- Reference Code 1.DNN : \[[Link](https://github.com/takezo5096/DNN.git)\]
- Reference Code 2.CuMat : \[[Link](https://github.com/takezo5096/cuMat.git)\]
- Reference CUDA Doc : \[[Link](https://docs.nvidia.com/cuda/cuda-c-programming-guide/index.html)\]
<br/>

## Repository Explain

This code just study repository for me.

If you want to read original book and code, Please refer to the link above.

Thanks.
<br/>

## Enviroment Setting

first, must be __compile__ and __add__ path of cuda

second, maybe need to using cuda sample's helper function(ex Chapter 2. etc), if we need add cuda sample's include path. 

<br/>

## How to compile and Profiling

__Compile__ 

``` cmd
nvcc File.cu -o OutFile
```

__Profiling__
``` cmd
nvprof ./OutFile
```

## Chapter 1. C++ Basic
\[[go](./Chapter1)]
<br/>

## Chapter 2. Matrix operation and Parallel Programming for Neural Networks
\[[go](./Chapter2)]
<br/>