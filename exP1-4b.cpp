#include <iostream>
#include <string>

using namespace std;

int main()
{
    double prod = 1.0;
    double sum = 0.0;

    for(double i = 1.0; i < 11.0; i++)
    {
        prod *= i;
    }
    for(double i = 1.0; i < 11.0; i++)
    {
        sum += ( 1.0 / i );
    }
    cout << "The product of the first ten positive integers is :" << prod << "\n";
    cout << "The sum of the reciprocals of the first ten positive integers is :" << sum << "\n";

    return 0;
}