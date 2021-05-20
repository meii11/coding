#include <iostream>
const int Size = 10;

int main(){
    using namespace std;

    double donations[Size];
    double donation;
    double sum = 0.0;
    double avg;
    int tmp = 0;
    int token = 0;
    cout << "Enter some number (q to quit): ";
    for (int i = 0; i < Size && cin >> donation; i++){
        donations[i] = donation;
        sum += donation;
        tmp ++ ;
    }
    // avg = sum / (sizeof(donations)/sizeof(donations[0]));  
    avg = sum / tmp;  
    for (int i = 0; i < tmp; i++){
        if (donations[i] > avg)
            token++;
    }
    cout << "Average: " << avg << " and sum of number which is higher than avg is: " << token << endl;

    return 0;
}