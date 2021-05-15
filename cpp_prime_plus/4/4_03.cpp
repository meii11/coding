#include <iostream>
using namespace std;

struct ant{
    int year;
};

int main(){
    ant s1, s2, s3;
    s1.year = 1998;
    ant * pa = &s2;
    pa->year = 1999;

    ant trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;  // 数组名代表了数组第一个元素的地址
    
    const ant * arp[3] = {&s1, &s2, &s3};   // 一个指针数组
    cout << arp[1]->year << endl;
    const ant **ppa = arp;  // 指向指针数组的指针，ppa是一个指向结构指针的指针，因此*ppa是一个结构指针（这里使用了*解引用，可以理解为去掉一层指针）
    auto ppb = arp;

    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))->year << endl;

    return 0;
}