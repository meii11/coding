#include <iostream>
const float interest = 0.1;
const float Compound_interest = 0.05;

int main(){
    using namespace std;

    float D_account = 100;
    float C_account = 100;
    int i = 0;
    while(D_account >= C_account){
        D_account += 100 * interest;
        C_account += C_account * Compound_interest;
        i++;
    }
    cout << "After " << i << " years, D has " << D_account << " and C has " << C_account << "." << endl;

    return 0;
}