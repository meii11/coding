#include <iostream>
#include <cstring>
#include <string>
struct Car{
    std::string make_name;
    int year;
};

int main(){
    using namespace std;
    int car_num;
    cout << "How many cars do you wish to catalog? " ;
    cin >> car_num;
    Car *new_car = new Car[car_num];
    
    for (int i = 0; i < car_num; i++){
        cout <<"Car #" << i+1 << endl;
        cout << "Please enter thr make: ";
        cin.get();
        getline(cin, new_car[i].make_name);
        cout << "Please enter thr year make: ";
        cin >> new_car[i].year;
    }

    cout << "Here is your collection: " << endl;

    for (int i = 0; i < car_num; i++){
        cout << new_car[i].year << " " << new_car[i].make_name << endl;
    }
    delete [] new_car;

    return 0;
}