#include <iostream>

using namespace std;

int main(int nNumberofArgs, char*pszArgs[])
{
    cout.setf(cout.boolalpha);

    int nArg1;
    cout << "Input Value 1: ";
    cin >> nArg1;

    int nArg2;
    cout << "Input Value 2: ";
    cin >> nArg2;

    bool b;
    b = nArg1 == nArg2;

    cout << "The statement, " << nArg1
         << " equals "        << nArg2
         << " is "            << b
         << endl;

    cout <<"Press Enter to continue... "  << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;

}

