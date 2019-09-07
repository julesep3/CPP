#include <iostream>
#include <string>

using namespace std;

int romNumToInt(string s)
{
    int answer = 0;
    int placeholder = 0;

    for (int i = 0; i < s.length(); i += 2)
    {
        int a = 0;
        int b = 0;
        int x = 0;

        // define a value for variable "a"
        if (s.substr(i, 1) == "M")
        {
            a = 1000;
        }
        else if (s.substr(i, 1) == "D")
        {
            a = 500;
        }
        else if (s.substr(i, 1) == "C")
        {
            a = 100;
        }
        else if (s.substr(i, 1) == "L")
        {
            a = 50;
        }
        else if (s.substr(i, 1) == "X")
        {
            a = 10;
        }
        else if (s.substr(i, 1) == "V")
        {
            a = 5;
        }
        else if (s.substr(i, 1) == "I")
        {
            a = 1;
        }
        else
        {
        }

        // define a value for variable "b"
        if (s.substr(i + 1, 1) == "M")
        {
            b = 1000;
        }
        else if (s.substr(i + 1, 1) == "D")
        {
            b = 500;
        }
        else if (s.substr(i + 1, 1) == "C")
        {
            b = 100;
        }
        else if (s.substr(i + 1, 1) == "L")
        {
            b = 50;
        }
        else if (s.substr(i + 1, 1) == "X")
        {
            b = 10;
        }
        else if (s.substr(i + 1, 1) == "V")
        {
            b = 5;
        }
        else if (s.substr(i + 1, 1) == "I")
        {
            b = 1;
        }
        else
        {
            b = 0;
        }

        // changing answer to decimal
        if (a > b || a == b)
        {
            x = a + b;
            if(placeholder == 0)
            {
                placeholder = x;
                answer += x;
            }
            else if (x <= placeholder)
            {
            placeholder = x;
            answer += x;
            }
            else
            {
                return 0;
            }
            
        }
        else if (a < b)
        {
            x = b - a;
            if (x > 0 && x <= placeholder)
            {
                answer += x;
                placeholder = x;
            }
            else
            {
                return 0;
            }
            
        }
    }

    return answer;
}

int main()
{
    string a = "CCXXII";   // 222
    string b = "MMMDXLII";   // 3542
    string c = "XII"; // 12
    string d = "DLXXVIII";    // 578
    string e = "MMDCCXCIV";  // 2794
    string f = "MCCXXXIV";    // 1234

    cout << romNumToInt(a) << " || " << romNumToInt(b) << " || " << romNumToInt(c) << endl;
    cout << romNumToInt(d) << " || " << romNumToInt(e) << " || " << romNumToInt(f) << endl;

    return 0;
}