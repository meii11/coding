#include <iostream>
#include <fstream>

int main(){
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double b_price;

    ofstream outFile;  // create object for output
    outFile.open("test.txt");  // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    b_price = 0.913 * a_price;

    // display information on screen with cout
    cout << fixed;  // 表示用一般的方式输出浮点数
    cout.precision(2); // 浮点数精度2
    cout.setf(ios_base::showpoint);

    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << b_price << endl;

    // using outFile instead of cout
    outFile << fixed;
    outFile.precision(4); // 浮点数精度2
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << b_price << endl;

    outFile.close();
    return 0;
}