#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int stringToInt(string s)
{
    bool tenths = true;
    bool hundredths = false;
    bool thousandths = false;
    int num = 0;
    string z = "0123456789";
    if (tenths)
    {
        for (int i = 0; i < z.length(); i++)
        {
            string elem = z.substr(i, 1);
            if (s.substr(s.length() - 1) == elem)
            {
                num += i;
                tenths = false;
                hundredths = true;
                break;
            }
        }
    }
    if (hundredths)
    {
        for (int i = 0; i < z.length(); i++)
        {
            string elem = z.substr(i, 1);
            if (s.substr(s.length() - 2) == elem)
            {
                int hunMultiplier = i*10;
                num += hunMultiplier;
                hundredths = false;
                thousandths = true;
                break;
            }
        }
    }
    if (thousandths)
    {
        for (int i = 0; i < z.length(); i++)
        {
            string elem = z.substr(i, 1);
            if (s.substr(s.length() - 2) == elem)
            {
                int thMultiplier = i*100;
                num += thMultiplier;
                thousandths = false;
                break;
            }
        }
    }
    return num;
}

int main()
{
    string x = "295";
    cout << stringToInt(x) << endl;
}

/*
bool sameDataType(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        string dataA = s.substr(i-1, 1);
        string dataB = s.substr(i, 1);
        const type_info& a = typeid(dataA);
        const type_info& b = typeid(dataB);        
        if (a != b)
        {
            return false;
        } 
    }
    return true;
}

int main()
{
    string a = "MCMVXIM";
    string b = "22559430";
    string c = "j29g92n";

    if(sameDataType(a)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    if(sameDataType(b)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    if(sameDataType(c)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }


    return 0;
}
*/
