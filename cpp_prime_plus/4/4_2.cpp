#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int Size = 20;
    string name;
    string dessert;

    cout << "Enter your name: \n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    cout << "xx" << name;
    cout << " for you, " << dessert << endl;

    return 0;
}