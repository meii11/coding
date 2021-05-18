#include <iostream>
#include <cstring>
#include <string>
const int strLen = 20;

int main(){
    using namespace std;
    string words;
    int num = 0;

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> words;
    while(words != "done"){
        num ++;
        cin >> words;
    }

    cout << "You entered a total of " << num << " words.";

    return 0;
}