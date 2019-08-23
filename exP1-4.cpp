#include <iostream>
#include <string>

using namespace std;

int main()
{
    int prod = 1;
    int sum = 0;

    for(int i = 1; i < 11; i++)
    {
        prod *= i;
    }
    for(int i = 1; i < 11; i++)
    {
        sum += ( 1 / i );
    }
    cout << "The product of the first ten positive integers is :" << prod << "\n";
    cout << "The sum of the reciprocals of the first ten positive integers is :" << sum << "\n";

    return 0;
}