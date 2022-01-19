#include <iostream>
#include <map>

#include "stdlib.h"
#include "string.h"

using namespace std;

int main(){
    int *value = new int;
    map<string, int *>m;

    m["test"] = value;// 키-값을 지정해서 삽입
    int *value2 = m["test"]; // 키로 참조 가능
    
    cout << "Original value is : " << value << endl;
    cout << "Map[test] is : " << m["test"] <<endl;
    cout << "Reference value is  :" << value2 << endl;
}