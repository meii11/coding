#include <iostream>
#include <cstring>
struct Pizza_info{
    std::string brand;
    int diameter;
    int weight;
};
int main(){
    using namespace std;
    Pizza_info *pa = new Pizza_info;
    cout << "Enter some info about your pizza: " << endl;
    cout << "Diameter: ";
    cin >> (*pa).diameter;
    cin.get();
    cout << "Brand: ";
    getline(cin, pa->brand);
    cout << "Weight: ";
    cin >> pa->weight;

    cout << "Your pizza' brand is: " << pa->brand << ", and has " << pa->diameter << " inch and weight " << pa->weight << " g." << endl; 
    delete pa;
    return 0;
}