#include <iostream>
using namespace std;
void menu();

int main(){
    menu();
    char ch;
    while(cin.get(ch) && ch != 'q'){
        switch (ch){
            case 'c': cout << "A maple is a carnivore.\n"; break;
            case 'p': cout << "A maple is a pianist.\n"; break;
            case 't': cout << "A maple is a tree.\n"; break;
            case 'g': cout << "A maple is a game.\n"; break;
            default: cout << "Wrong enter!\n";
        }
        cout << "Please enter c, p, t, or g: ";
        cin.get(ch);
    }
    cout << "Bye.\n";
    return 0;
}

void menu(){
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore    p) pianist" << endl;
    cout << "t) tree         g) game" << endl;
    cout << "Please enter c, p, t, or g (q to quit): ";
}