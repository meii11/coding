#include <iostream>
using namespace std;

int main(){
    char ch;
    int ct1, ct2;
    ct1 = ct2 = 0;
    while((ch = cin.get()) != '$'){
        cout << ch;
        if (ch = '$'){
            ct2 ++;
        }
        cout << ch;
    }
    cout << ct2;
    return 0;
}