#include <iostream>
#include <string>

using namespace std;

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

string convert(string q)
{
    bool ones = true;
    bool tenths = false;
    bool hundredths = false;
    bool thousandths = false;
    string answer = "";

    for (int i = 0; i < q.length(); i++)
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
        int iter = q.length() - 1 - i;
        string numString = (q.substr(iter, 1));
        cout << numString << endl;
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

int main()
{
    string a = "222";
    string b = "3542";
    string c = "12";
    string d = "578";
    string e = "2794";
    string f = "1234";

    cout << convert(a) << endl;
    cout << convert(b) << endl;
    cout << convert(c) << endl;
    cout << convert(d) << endl;
    cout << convert(e) << endl;
    cout << convert(f) << endl;

    return 0;
}