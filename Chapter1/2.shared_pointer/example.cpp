#include <iostream>
#include <shared_mutex>
#include <stdlib.h>

using namespace std;
using pint = shared_ptr<int>;


int main(){
    pint p = pint(new int(2));
    cout << p << " is shared memory address : "<< *p << endl;
    pint q = pint(new int(3));
    cout << q << " is shared memory address : "<< *q <<endl;
}
