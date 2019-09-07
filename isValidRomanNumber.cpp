#include <iostream>
#include <string>

using namespace std;

bool isValidRomanNumber(string s)
{
    bool answer = true;
    for(int i = 0; i < s.length(); i++)
    {
        string m = s.substr(i, 1);
        if(m == "M" || m == "m" || m == "D" || m == "d" || m == "C" || m == "c" || m == "L")
        {
            answer = true;
        }
        else if(m == "l" || m == "X" || m == "x" || m == "V" || m == "v" || m == "I" || m == "i")
        {
            answer = true;
        }
        else
        {
            answer = false;
        }
        
    }
    return answer;
}

int main()
{
    string x = "mxvi";

    cout << isValidRomanNumber(x);


    return 0;
}