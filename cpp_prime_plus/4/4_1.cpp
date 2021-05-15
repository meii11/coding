#include <iostream>
using namespace std;
struct Student{
    char fist_name[20];
    char last_name[20];
    char grade;
    int age;
};

int main(){
    Student *pa = new Student;
    cout << "What is your first name? " << endl;
    cin.get(pa->fist_name, 20).get();
    cout << "What is your last name? " << endl;
    cin.get(pa->last_name, 20).get();

    char tmp;
    cout << "What letter grad do you deserve? ";
    cin >> pa->grade;

    cout << "What is your age? ";
    cin >> pa->age;

    cout << pa->last_name << ", " << pa->fist_name << endl;
    cout << "Grade: " << char(pa->grade + 1) << endl;
    cout << "age: " << (*pa).age << endl;
    
    return 0;
}