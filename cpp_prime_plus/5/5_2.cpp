#include <iostream>
#include <array>
const int ArSize = 100;

int main(){
    std::array<long double, ArSize> fac;
    fac[0] = fac[1] = 1;
    for (int i = 2; i < ArSize; i++){
        fac[i] = i * fac[i-1];
    }
    for (int i = 0; i < ArSize; i++){
        std::cout << i << "!= " << fac[i] << std::endl;
    }

    return 0;
}