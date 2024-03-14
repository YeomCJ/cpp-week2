#include <iostream>
#include <ctime>
#include <random>

int util() {

    std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<int> dis(0,9);

    int a = dis(gen), b = dis(gen), c = dis(gen);
    int sum = a * 100 + (b *10) + c;
    
    return sum;
}