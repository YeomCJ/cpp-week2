#include <iostream>

int game(int a, int b, int c);

int main() {
    int a,b,c;
    std::cout << "Enter a answer: ";
    std::cin >> a;
    
    c = a % 10;
    b = a / 10 % 10;
    a /= 100;
    
    game(a,b,c);

}
