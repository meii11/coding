#include <iostream>
#include <fstream>
#include <cstdlib>  // support for exit()
const int SIZE = 60;

int main(){
    using namespace std;

    char filename[SIZE];
    ifstream inFIle;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFIle.open(filename);

    if (!inFIle.is_open()){
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0;

    inFIle >> value;
    while (inFIle.good()){ // while input good and not at EOF 即在没有任何问题的情况下返回true，under no wrong situation it will return true
        ++count;
        sum += value;
        inFIle >> value;
    } 

    if (inFIle.eof()){
        cout << "End of file reached.\n";
    }
    else if (inFIle.fail()){
        cout << "Input terminated by data mismatch.\n";
    }
    else {
        cout << "Input terminated for unknown reason.\n";
    }

    if (count == 0){
        cout << "No data processed.\n";
    }
    else {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    inFIle.close();
    return 0;
}