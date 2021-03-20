#include <iostream>
void out1(void);
void out2(void);

int main(){
    out1();
    out1();
    out2();
    out2();
}

void out1(void){
    using namespace std;
    cout << "Three blind mice. \n";
}

void out2(void){
    using namespace std;
    cout << "See how they run. \n";
}