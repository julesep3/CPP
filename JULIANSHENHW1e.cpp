// julian shen
// occ fall 2019
// advanced c++
// HW 1

#include <iostream>
#include <string>

using namespace std;

bool isZero(string s)
{
    bool answer = false;
    if (s == "0" || s == "O" || s == "o")
    {
        answer = true;
    }
    return answer;
}

int stringToInt(string s)
{
    int num = 0;
    string numList = "0123456789";
    for (int i = 0; i < numList.length(); i++)
    {
        string stringNumber = numList.substr(i, 1);
        if (s == stringNumber)
        {
            num = i;
        }
    }
    return num;
}

string onesConvert(int x)
{
    string answer = "";
    if (x == 1)
    {
        answer = "I";
    }
    else if (x == 2)
    {
        answer = "II";
    }
    else if (x == 3)
    {
        answer = "III";
    }
    else if (x == 4)
    {
        answer = "IV";
    }
    else if (x == 5)
    {
        answer = "V";
    }
    else if (x == 6)
    {
        answer = "VI";
    }
    else if (x == 7)
    {
        answer = "VII";
    }
    else if (x == 8)
    {
        answer = "VIII";
    }
    else if (x == 9)
    {
        answer = "IX";
    }
    return answer;
}

string tenthsConvert(int x)
{
    string answer = "";
    if (x == 1)
    {
        answer = "X";
    }
    else if (x == 2)
    {
        answer = "XX";
    }
    else if (x == 3)
    {
        answer = "XXX";
    }
    else if (x == 4)
    {
        answer = "XL";
    }
    else if (x == 5)
    {
        answer = "L";
    }
    else if (x == 6)
    {
        answer = "LX";
    }
    else if (x == 7)
    {
        answer = "LXX";
    }
    else if (x == 8)
    {
        answer = "LXXX";
    }
    else if (x == 9)
    {
        answer = "XC";
    }
    return answer;
}

string hundredthsConvert(int x)
{
    string answer = "";
    if (x == 1)
    {
        answer = "C";
    }
    else if (x == 2)
    {
        answer = "CC";
    }
    else if (x == 3)
    {
        answer = "CCC";
    }
    else if (x == 4)
    {
        answer = "CD";
    }
    else if (x == 5)
    {
        answer = "D";
    }
    else if (x == 6)
    {
        answer = "DC";
    }
    else if (x == 7)
    {
        answer = "DCC";
    }
    else if (x == 8)
    {
        answer = "DCCC";
    }
    else if (x == 9)
    {
        answer = "CM";
    }
    return answer;
}

string thousandthsConvert(int x)
{
    string answer = "";
    if (x == 1)
    {
        answer = "M";
    }
    else if (x == 2)
    {
        answer = "MM";
    }
    else if (x == 3)
    {
        answer = "MMM";
    }
    else if (x == 4)
    {
        answer = "MMMM";
    }
    return answer;
}

bool isValidDecimalNumber(string s)
{
    bool answer = true;
    for (int i = 0; i < s.length(); i++)
    {
        string m = s.substr(i, 1);
        if (m == "1" || m == "2" || m == "3" || m == "4" || m == "5")
        {
            answer = true;
        }
        else if (m == "6" || m == "7" || m == "8" || m == "9" || m == "0")
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

bool isValidRomanNumber(string s)
{
    bool answer = true;
    for (int i = 0; i < s.length(); i++)
    {
        string m = s.substr(i, 1);
        if (m == "M" || m == "m" || m == "D" || m == "d" || m == "C" || m == "c" || m == "L")
        {
            answer = true;
        }
        else if (m == "l" || m == "X" || m == "x" || m == "V" || m == "v" || m == "I" || m == "i")
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

string convertDecimalToRoman(string s)
{
    bool ones = true;
    bool tenths = false;
    bool hundredths = false;
    bool thousandths = false;
    string answer = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (i == 1)
        {
            ones = false;
            tenths = true;
            hundredths = false;
            thousandths = false;
        }
        else if (i == 2)
        {
            ones = false;
            tenths = false;
            hundredths = true;
            thousandths = false;
        }
        else if (i == 3)
        {
            ones = false;
            tenths = false;
            hundredths = false;
            thousandths = true;
        }
        int iter = s.length() - 1 - i;
        string numString = (s.substr(iter, 1));
        int numInt = stringToInt(numString);

        if (ones)
        {
            for (int j = 0; j < 10; j++)
            {
                if (numInt == j)
                {
                    //tenths = false;
                    //hundredths = true;
                    answer = onesConvert(numInt) + answer;
                }
            }
        }
        if (tenths)
        {
            for (int j = 0; j < 10; j++)
            {
                if (numInt == j)
                {
                    answer = tenthsConvert(numInt) + answer;
                }
            }
        }
        if (hundredths)
        {
            for (int j = 0; j < 10; j++)
            {
                if (numInt == j)
                {
                    answer = hundredthsConvert(numInt) + answer;
                }
            }
        }
        if (thousandths)
        {
            for (int j = 0; j < 10; j++)
            {
                if (numInt == j)
                {
                    answer = thousandthsConvert(numInt) + answer;
                }
            }
        }
    }
    return answer;
}

string convertRomanToDecimal(string s)
{
    int num = 0;
    int placeholder = 0;
    string answer;

    for (int i = 0; i < s.length(); i += 2)
    {
        int a = 0;
        int b = 0;
        int x = 0;

        string m = s.substr(i, 1);
        // define a value for variable "a"
        if (m == "M" || m == "m")
        {
            a = 1000;
        }
        else if (m == "D" || m == "d")
        {
            a = 500;
        }
        else if (m == "C" || m == "c")
        {
            a = 100;
        }
        else if (m == "L" || m == "l")
        {
            a = 50;
        }
        else if (m == "X" || m == "x")
        {
            a = 10;
        }
        else if (m == "V" || m == "v")
        {
            a = 5;
        }
        else if (m == "I" || m == "i")
        {
            a = 1;
        }

        string n = s.substr(i + 1, 1);
        // define a value for variable "b"
        if (n == "M" || n == "m")
        {
            b = 1000;
        }
        else if (n == "D" || n == "d")
        {
            b = 500;
        }
        else if (n == "C" || n == "c")
        {
            b = 100;
        }
        else if (n == "L" || n == "l")
        {
            b = 50;
        }
        else if (n == "X" || n == "x")
        {
            b = 10;
        }
        else if (n == "V" || n == "v")
        {
            b = 5;
        }
        else if (n == "I" || n == "i")
        {
            b = 1;
        }

        // changing answer to decimal
        if (a > b || a == b)
        {
            x = a + b;
            if (placeholder == 0)
            {
                placeholder = x;
                num += x;
            }
            else if (x <= placeholder)
            {
                num += x;
                placeholder = x;
                answer = to_string(num);

            }
            else
            {
                answer = "Invalid input";
            }
        }
        else if (a < b)
        {
            x = b - a;
            if (x > 0 && x <= placeholder)
            {
                num += x;
                placeholder = x;
                answer = to_string(num);
            }
            else
            {
                answer = "Invalid input";
            }
        }
    }

    return answer;
}

int main()
{
    string numConvert;
    bool more = true;
    int conversionCount = 0;
    int decimalConversions = 0;
    int romanNumConversions = 0;

    cout << "Welcome to Roman Number Conversion!" << endl;

    while (more)
    {
        cout << "Please enter a value to convert: " << endl;
        cin >> numConvert;

        if (isValidDecimalNumber(numConvert))
        {
            string romanNum = convertDecimalToRoman(numConvert);
            decimalConversions++;
            cout << numConvert << " (Decimal) is " << romanNum << " (Roman)" << endl;
        }
        else if (isValidRomanNumber(numConvert))
        {
            string decimalNum = convertRomanToDecimal(numConvert);
            romanNumConversions++;
            cout << numConvert << " (Roman) is " << decimalNum << " (Decimal)" << endl;
        }
        else if (isZero(numConvert))
        {
            cout << conversionCount << " numbers were converted(" << decimalConversions
                 << " Decimal to Roman, " << romanNumConversions << " Roman to Decimal)" << endl;
            more = false;
        }
        else
        {
            cout << "I did not understand input " << numConvert << "." << endl;
        }
    }
    cout << "Thank you for playing Roman Number Conversion!" << endl;

    return 0;
}