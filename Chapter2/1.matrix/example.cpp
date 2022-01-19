#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<array<int, 1000>,1000>a;
    int b[1000][1000];
    for (int i=0; i<1000; i++) {
        for (int j=0; j<1000; j++) {
            a[i][j] = 1;
            b[i][j] = 1;
        }
    }

    return 0;
}