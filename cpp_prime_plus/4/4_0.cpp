#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.get(name, ArSize).get();  // 第一个get剩下一个换行符在输入队列中，然后第二个无参数跳过剩下的换行符
    cout << "Enter your favourite dessert: \n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}