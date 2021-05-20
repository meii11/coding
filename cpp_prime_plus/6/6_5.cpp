#include <iostream>

int main(){
    using namespace std;
    float salary;
    cout << "Please enter your salary: ";

    float tax;
    while(cin >> salary && salary >= 0){
        if (salary <= 5000){
            tax = 0;
        }
        else if (salary > 5000 and salary <= 15000){
            tax = salary * 0.1;
        }
        else if (salary > 15000 and salary <= 35000){
            tax = 10000 * 0.1 + (salary-15000) * 0.15;
        }
        else if (salary > 35000){
            tax = 10000 * 0.1 + 20000 * 0.15 + (salary-35000) * 0.2;
        }
        cout << "You need to pay tax: " << tax << endl;
        cout << "Please enter your salary: ";
    }

    cout << "Bye.\n";
    return 0;
}