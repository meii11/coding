#include <iostream>
#include <cctype>

int main(){
    using namespace std;
    char ch;

    while(cin.get(ch) && ch != '@'){
        if (!isdigit(ch)){
            if (islower(ch)){
                ch = toupper(ch);  // 这里要注意，toupper和tolower的返回值时int型，即为ascii值。
                cout << ch;
            }
            else if (isupper(ch)){
                ch = tolower(ch);
                cout << ch;
            }
            else {
                cout << ch;
            }
        }
    }

    return 0;
}