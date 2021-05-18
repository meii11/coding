#include <iostream>
#include <cstring>
const int strLen = 20;

int main(){
    using namespace std;
    char words[strLen];
    int num = 0;

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> words;
    while(strcmp(words, "done")){
        num ++;
        cin >> words;
    }

    cout << "You entered a total of " << num << " words.";

    return 0;
}