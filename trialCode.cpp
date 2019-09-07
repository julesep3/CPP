#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

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

