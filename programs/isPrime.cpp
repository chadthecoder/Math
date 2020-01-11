#include "../namespaces/cjmMath.cpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        if(cjmMath::isPrime(std::atof(argv[1])))
        {
            std::cout << argv[1] << " is prime!" << std::endl;
        }
        else
        {
            {
                std::cout << argv[1] << " is composite (not prime)!" << std::endl;
            }
        }
        
    }    
    else std::cout << "You must provide one variable to calculate if a variable is prime." << std::endl;
    return 0;
}
