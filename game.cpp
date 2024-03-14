#include <iostream>

int game(int a, int b, int c) {

    int Asarray[3] = {a,b,c};
    
    int count = 5;
    while (count) {
    std::cout <<  count << " chances left." << '\n';
    int strike = 0, ball = 0;
    int d,e,f;
    
    std::cout << "Enter a guess: ";
    std::cin >> d;
    f = d % 10;
    e = d / 10 % 10;
    d /= 100;
    
    int Guarray[3] = {d,e,f};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (Asarray[i] == Guarray[j]) {
                if (i == j) strike++;
                else ball++;
            }
        }
    }
    if (strike == 3) {
        std::cout << "You win!" << '\n';
        return 0;
    }
    else
        std::cout << "Strikes: " << strike << ", Balls: " << ball << '\n';
    count--;
    }
    std::cout << "You lose!" << '\n';
}
