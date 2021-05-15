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
    cin.get(tmp, 80).get();  // 这样可以以行为单位进行输入，但是get(position, size)使用时会将回车留在输入队列里面，因此使用没有参数的get()或者get(ch)跳过回车；
    char* pn = new char [strlen(tmp) + 1];
    strcpy(pn, tmp);

    return pn;
}

