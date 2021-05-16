#include <iostream>
using namespace std;

int main(){
    int ch;
    int sum = 0;
    cout << "Enter some numbers (0 to quit)";
    cin >> ch;
    while(ch != 0){
        sum += ch;
        cout << "Until now, the sum of all your entered numbers is: " << sum << endl;
        cin >> ch;
    }

    return 0;
}