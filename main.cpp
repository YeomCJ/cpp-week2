#include <iostream>

int game(int a, int b, int c);
int util();

int main() {
    int a,b,c;
    
    a = util();

    c = a % 10;
    b = a / 10 % 10;
    a /= 100;
    
    game(a,b,c);

}