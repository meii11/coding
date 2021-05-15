#include <iostream>
#include <cstring>
using namespace std;
const int lenth = 20;

int main(){
    string f_name;
    string l_name;
    string name;

    cout << "Enter your fisrt name: ";
    getline(cin, f_name);

    cout << "Enter your last name: ";
    getline(cin, l_name);

    // name = f_name;
    // name = name + ", ";
    // name = name + l_name;
    name = f_name + ", " + l_name;

    cout << "Here's the information in a single string: " << name << endl;

    return 0;

}