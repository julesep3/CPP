#include <iostream>
#include <string>

using namespace std;

bool isValidDecimalNumber(string s)
{
    bool answer = true;
    for(int i = 0; i < s.length(); i++)
    {
        string m = s.substr(i, 1);
        if(m == "1" || m == "2" || m == "3" || m == "4" || m == "5")
        {
            answer = true;
        }
        else if(m == "6" || m == "7" || m == "8" || m == "9" || m == "0")
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
    string x = "3492";
    if(isValidDecimalNumber(x))
    {
        cout << "yippee" << endl;
    }
    cout << isValidDecimalNumber(x);

    return 0;
}