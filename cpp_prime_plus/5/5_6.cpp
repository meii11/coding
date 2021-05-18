#include <iostream>
#include <cstring>


int main(){
    using namespace std;

    float sales[3][12];

    string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"  
    };
    int sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 12; j++){
            cout << "Enter sale for year " << i+1 << " and month " << months[j] << ": ";
            cin >> sales[i][j];
            sum += sales[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 12; j++){
            cout << "Year " << i+1 << "and month " << months[j] << " sale: " << sales[i][j] << endl;
        }
    }
    cout << "And the sum is: " << sum << endl;

    return 0;
}   