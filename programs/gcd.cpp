#include "../namespaces/cjmMath.cpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if(argc == 3) std::cout << cjmMath::getGCD(std::atof(argv[1]), std::atof(argv[2])) << std::endl;
    else std::cout << "You must provide two variables to calculate the GCD." << std::endl;
    return 0;
}
