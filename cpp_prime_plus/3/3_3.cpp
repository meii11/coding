#include <iostream>
#include <stdio.h>

int main(){
    using namespace std;
    cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
    cout << "First enter the degrees: ";
    int degree;
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    int minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    int seconds;
    cin >> seconds;

    const int rate = 60;
    float latitude = float(seconds) / rate / rate + float(minutes) / rate + degree;

    printf("%d degrees, %d minutes, %d seconds = %f degrees.\n", degree, minutes, seconds, latitude);

    return 0;
}