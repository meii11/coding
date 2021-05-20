#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
const std::string Filename = "test.txt";

int main(){
    using namespace std;

    ifstream inFile;
    inFile.open(Filename);

    if (!inFile.is_open()){
        cout << "Could not open the file " << Filename << endl;
        cout << "Program teminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int count = 0;
    inFile.get(ch);
    while(inFile.good()){
        count ++;
        inFile.get(ch);
    }

    if (inFile.eof()){
        cout << "End of file reached.\n";
    }
    else if (inFile.fail()){
        cout << "Input terminated by data mismatch.\n";
    }
    else {
        cout << "Input terminated for unknown reason.\n";
    }

    if (count == 0){
        cout << "No data! .\n";
    }
    else {
        cout << "File has " << count << " caracters." << endl;
    }

    inFile.close();
    system("pause");
    return 0;
}