#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<double, 3> run;
    cout << "Enter your score: ";
    cin >> run[0];
    cin >> run[1];
    cin >> run[2];

    double avg = (run[0]+run[1]+run[2])/3.0;

    cout << "Average grade: " << avg << endl;
    return 0;
}