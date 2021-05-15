#include <iostream>

int main(){
    struct CandyBar{
        char brand[20];
        float weight;
        int Calories;
    }snack{"Mocha Munch", 2.3, 350};

    std::cout << "Brand: " << snack.brand << std::endl;
    std::cout << "Weight: " << snack.weight << std::endl;
    std::cout << "Calories: " << snack.Calories << std::endl;
    
    return 0;
}