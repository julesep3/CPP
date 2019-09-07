// julian shen
// occ fall 2019
// advanced c++
// HW 1

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

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
        if (sameDataType(numConvert))
        {
            if (isValidDecimalNumber(numConvert))
            {
                int romanNum = convertDecimalToRoman(numConvert);
                decimalConversions++;
                cout << numConvert << " (Decimal) is " << romanNum << " (Roman)" << endl;
            }
            else if (isValidRomanNumber(numConvert))
            {
                int decimalNum = convertRomanToDecimal(numConvert);
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
    }
    cout << "Thank you for playing Roman Number Conversion!" << endl;

    return 0;
}

void converter(string numConvert)
{
}

// function dataTypeCheck derived using typeid() reference info from : https://en.cppreference.com/w/cpp/language/typeid
bool sameDataType(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        string dataA = s.substr(i - 1, 1);
        string dataB = s.substr(i, 1);
        const type_info &a = typeid(dataA);
        const type_info &b = typeid(dataB);
        if (a != b)
        {
            return false;
        }
    }
    return true;
}

string capitalize(string s)
{
}

bool isZero(string s)
{
    if(s == "0" || s == "O")
    {
        return true;
    }
}

bool isValidDecimalNumber(string s)
{
}

bool isValidRomanNumber(string s)
{
}

string convertRomanToDecimal(string s)
{
}

string convertDecimalToRoman(string s)
{
}