#include <iostream>

int main(){
    using namespace std;
    const float rate = 0.083;
    int inch;
    float feet;
    cout << "Input your height in inch: ___\b\b\b";
    cin >> inch;
    feet = rate * inch;
    cout << "Your height in inch is " << inch << "." << endl;
    cout << "And your height in feet is " << feet << "." << endl;

}