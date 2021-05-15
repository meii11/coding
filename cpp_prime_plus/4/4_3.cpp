#include <iostream>
#include <cstring>
using namespace std;
const int lenth = 20;

int main(){
    char f_name[lenth];
    char l_name[lenth];
    char name[lenth * 2];

    cout << "Enter your fisrt name: ";
    cin.get(f_name, lenth).get();

    cout << "Enter your last name: ";
    cin.get(l_name, lenth).get();

    strcpy(name, f_name);
    strcat(name, ", ");
    strcat(name, l_name);

    cout << "Here's the information in a single string: " << name << endl;

    return 0;

}