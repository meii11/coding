#include <iostream>

int main(){
    using namespace std;

    int num;
    cout << "Enter number of rows: ";
    cin >> num;

    for (int i = 0; i < num; i++){
        for(int j = 0; j < num-i-1;j++){
            cout << ".";
        }
        for (int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0; 
}