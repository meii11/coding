#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<int, 2> pa;
    cout << "Enter two numbers: ";
    for(int i = 0; i < 2; i++){
        cin >> pa[i];
        cin.get();
    }
    int sum = 0;
    for(int i = pa[0]; i <= pa[1]; i++){
        sum += i;
    }
    cout << "Sum = " << sum << endl;

    return 0;

}