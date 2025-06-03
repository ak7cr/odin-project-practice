#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

int main() {
    int limit = 3; // Set your upper limit here
    srand(time(0)); // Seed the random number generator

    int randomNumber = rand() % limit; // Generates a number from 0 to limit-1
    cout << "Random number: " << randomNumber << std::endl;

    return 0;
}