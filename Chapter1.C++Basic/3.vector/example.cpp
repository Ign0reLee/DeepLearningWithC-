#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;


int main(){
    int *p = new int(2);
    vector<int *>v;

    v.push_back(p);   // 목록 끝에 원소 삽입
    int *p2 = v.at(0);// 0번째 요소를 참조
    int *p3 = v[0];   // 0번째 요소를 참조하는 다른 방법
    
    cout << "Vector 0 is " << v.at(0) << endl;
    cout << "Reference is : "  << p2 << endl;
    cout << "Reference2 is : " << p3 << endl;

}
