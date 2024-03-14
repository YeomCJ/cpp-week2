#include <iostream>
#include <ctime>
#include <random>

int util() {

    std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<int> dis(0,9);

    int a = dis(gen), b, c, k = 1;
    while (k) {
        b = dis(gen);
        if (a != b) {
            while(k) {
                c = dis(gen);
                if (c != a && c != b) k--;
            }
        } 
    }
    int sum = a * 100 + (b *10) + c;
    
    return sum;
}