#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    string ch;
    int Vowels = 0, Consonants = 0, Others = 0;
    cout << "Enter words (q to quit): " << endl;
    while (cin >> ch && ch != "q"){
        if (isalpha(ch[0])){
            if (ch[0] == 'a' || ch[0] == 'A' || ch[0] == 'e' || ch[0] == 'E' || ch[0] == 'i' || ch[0] == 'I' || ch[0] == 'o' || ch[0] == 'O' || ch[0] == 'u' || ch[0] == 'U')
				Vowels++;
			else if (!(ch[0] == 'a' || ch[0] == 'A' || ch[0] == 'e' || ch[0] == 'E' || ch[0] == 'i' || ch[0] == 'I' || ch[0] == 'o' || ch[0] == 'O' || ch[0] == 'u' || ch[0] == 'U'))
				Consonants++;
            else {
                Others ++;
            }
        }
    }

    cout << Vowels << " words beginning with vowels" << endl;
	cout << Consonants << " words beginning with consonants" << endl;
	cout << Others << " others" << endl;
	system("pause");
	return 0;
}