#include <iostream>
using namespace std;

int main(){
    enum Response {No, Yes, Maybe};  // 枚举应该可以理解为给字符串赋值为整数

    cout << Yes << endl;
    double ted = 1.1;
    double* a = &ted;
    cout << *a << endl;
    
    return 0;
}