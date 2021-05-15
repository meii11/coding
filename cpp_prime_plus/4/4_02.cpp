#include <iostream>
#include <cstring>
using namespace std;
char* getname(void);

int main(){
    char* name;
    name = getname();
    cout << name << " at " << (int*) name << endl;
    delete [] name;

    name = getname();
    cout << name << " at " << (int*) name << endl;
    delete [] name;

    return 0;
}

char* getname(){
    char tmp[80];
    cout << "Enter a name: ";
    // cin >> tmp;
    cin.get(tmp, 80).get();
    char* pn = new char [strlen(tmp) + 1];
    strcpy(pn, tmp);

    return pn;
}

