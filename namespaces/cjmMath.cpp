#include <iostream>
#include <vector>

namespace cjmMath
{
bool isPrime(int n)
{
    if (n == 2)
        return true;
    if (n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    if (n % 3 == 0)
        return false;

    int i = 5, w = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += w;
        w = 6 - w;
    }
    return true;
}

std::vector<int> primeNums(int i, int j)
{
    std::vector<int> v;
    for (i; i <= j; i++)
    {
        if (isPrime(i))
        {
            v.push_back(i);
        }
    }
}

std::vector<int> primeFactors(int num)
{
    std::vector<int> primeFactors;
    for (int i = 2; i < num; i++)
    {
        while (num % i == 0)
        {
            num /= i;
            primeFactors.push_back(i);
        }
    }
    return primeFactors;
}

void printVector(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
}

double getMod(double a, double b)
{
    return (a - (b * ((int)a / (int)b)));
}

template <class num> //put before function or class, can use to use wild card class
std::vector<num> chadSort()
{
    std::vector<num> nums;
    return nums;
}

} // namespace cjmMath