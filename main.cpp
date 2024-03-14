#include <iostream>

int game(int a, int b, int c);
int util();

int main() {
    int a,b,c;
    std::cout << "Answer is : ";
    a = util();

    if (a / 100 == 0) {
        if (a / 10 == 0) 
            std::cout << "00" << a << '\n';
        std::cout << 0 << a << '\n';
    } 
    else std::cout << a << '\n';
    
    c = a % 10;
    b = a / 10 % 10;
    a /= 100;
    
    game(a,b,c);

}
