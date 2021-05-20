#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
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

    ifstream inFile;
    inFile.open("member.txt");

    if (!inFile.is_open()){
        cout << "Could not open the file " << "member.txt" << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    while (inFile.good()){
        inFile >> amount;
        inFile.get();
        Donor * member = new Donor[amount];
        cout << amount << endl;

        for (int i = 0; i < amount; i++){
            cout << "Enter #" << i+1 << " donor's information.\n";
            cout << "Name: ";
            inFile.getline(member[i].name, 20);
            cout << "Funds: ";
            inFile >> (member+i)->funds;
            inFile.get();
            if ((member+i)->funds > 10000)
                indexGP.push_back(i);
            else
                indexP.push_back(i);
        }
        // cout << member[4].name << endl;
        cout << endl << "Grand Patrons" << endl;
        for (int i = 0; i < indexGP.size(); i++){
            cout << member[indexGP.at(i)].name << ": " << member[indexGP.at(i)].funds << endl;
        }
        cout << "Patrons" << endl;
        for (int i = 0; i < indexP.size(); i++){
            cout << member[indexP.at(i)].name << ": " << member[indexP.at(i)].funds << endl;
        }
    }
    
    system("pause");
    return 0;
}