#include <iostream>
#include <vector>
struct Donor{
    char name[20];
    double funds;
};

int main(){
    using namespace std;
    int amount;
    int tmp = 0;
    vector <int> indexGP, indexP;
    cout << "Enter number of donor: ";
    cin >> amount;
    Donor * member = new Donor[amount];

    for (int i = 0; i < amount; i++){
        cout << "Enter #" << i+1 << " donor's information.\n";
        cout << "Name: ";
        cin >> member[i].name;
        cout << "Funds: ";
        cin >> (member+i)->funds;
        if ((member+i)->funds > 10000)
            indexGP.push_back(i);
        else
            indexP.push_back(i);
    }

    cout << "Grand Patrons" << endl;
    for (int i = 0; i < indexGP.size(); i++){
        cout << member[indexGP.at(i)].name << ": " <<member[indexGP.at(i)].funds << endl;
    }
    cout << "Patrons" << endl;
    for (int i = 0; i < indexP.size(); i++){
        cout << member[indexP.at(i)].name << ": " <<member[indexP.at(i)].funds << endl;
    }

    delete [] member;
    return 0;
}