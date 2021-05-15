#include <iostream>

int main(){
    struct CandyBar{
        char brand[20];
        float weight;
        int Calories;
    };
    CandyBar candy[3] = {
        {"A", 1.1, 2},
        {"B", 1.1, 2},
        {"C", 1.1, 2}
    };
    std::cout << "Brand: " << candy[0].brand << std::endl;
    std::cout << "Weight: " << candy[0].weight << std::endl;
    std::cout << "Calories: " << candy[0].Calories << std::endl;
    
    return 0;
}