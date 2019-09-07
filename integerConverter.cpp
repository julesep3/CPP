#include <iostream>
#include <string>

using namespace std;


/*
string function(string s)
{
}
*/

bool isZero(string s)
{
    if(s == "0" || s == "O")
    {
        return true;
    }
    return false;
}

int main()
{
    string x = "O";
    if(isZero(x)) 
    {
        cout << "true" << endl;
    }
    else if(!isZero(x))
    {
        cout << "false" << endl;
    }

    return 0;
}