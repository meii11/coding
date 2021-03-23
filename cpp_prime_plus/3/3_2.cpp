#include <iostream>

int main(){
    using namespace std;
    const int inch2feet = 12;
    const float feet2cm = 0.0254;
    const float kg2pound = 2.2;
    int inch;
    int feet;
    int pound;

    cout << "Input your height in inch: _\b";
    cin >> inch;

    cout << "Input your height in feet: __\b\b";
    cin >> feet;
    float height = (inch * inch2feet + feet) * feet2cm;

    cout << "Input your weight in pound: ___\b\b\b";
    cin >> pound;
    float weight = pound / kg2pound;
 
    cout << "Your height is " << inch << " inches " << feet << " feets, " << height << "m." <<endl;
    cout << "And your height is " << pound << " pounds, " << weight << " kg." << endl;

    float bmi = weight / (height * height);
    cout << "Your bmi is: " << bmi << endl;

    return 0;
}