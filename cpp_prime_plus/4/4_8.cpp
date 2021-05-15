#include <iostream>

int main(){
    struct CandyBar{
        char brand[20];
        float weight;
        int Calories;
    };
    CandyBar *pa = new CandyBar[3];
    pa[0] = {"A", 1.1, 2};
    pa = pa + 1;
    pa = {"B", 1.1, 2};
    pa = pa + 1;
    pa = {"C", 1.1, 2};

    std::cout << "Brand: " << pa[0].brand << std::endl;
    std::cout << "Weight: " << pa[1].weight << std::endl;
    // std::cout << "Calories: " << *(pa+2)—>Calories << std::endl;
    
    return 0;
}

// #include <iostream>
// #include <string>

// struct CandyBar{
//     std::string brand;
//     double weight;
//     int calorie;      
// };

// int main(void)
// {
//     using namespace std;
    
//     int i;
//     CandyBar * snacks = new CandyBar [3];
    
//     for (i = 0; i < 3; ++i)
//         snacks[i] = {"Mocha Munch", 2.3, 350};
    
//     for(i = 0; i < 3; ++i)
//     {
//         cout << "Brand: " << snacks[i].brand << endl;
//         cout << "Weight: " << snacks[i].weight << endl;
//         cout << "Calorie: " << snacks[i].calorie << endl;   
//     }
    
//     delete [] snacks;
    
//     return 0;
// }