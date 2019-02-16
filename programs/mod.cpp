#include "../namespaces/cjmMath.cpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if(argc == 3) std::cout << cjmMath::getMod(std::atof(argv[1]), std::atof(argv[2]));
    else std::cout << "You must provide two variables to calculate the modulus.";
    return 0;
}
