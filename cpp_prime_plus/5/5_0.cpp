#include <iostream>
#include <ctime>

int main(){
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "Starting\a\n";
    clock_t start = clock();  // 读取程序运行的时间
    while (clock() - start < delay)
        ;
    
    cout << "Done \a\n";
    return 0;
}