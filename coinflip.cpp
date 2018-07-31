// Heads/Tails program
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

int main() {
    srand(time(0));
    int randomNumber = 1 + (rand() % (1-0+1));
    std::cout << "Flipping..." << std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(1));
    if(randomNumber == 1) { std::cout << "Heads" << std::endl; }
    else { std::cout << "Tails" << std::endl; }

    return 0;
}
