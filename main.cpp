#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberofArgs, char*pszArgs[])
{
    int nLoopCount;
    cout << "Enter loop count: ";
    cin >> nLoopCount;

    while (nLoopCount > 0)
    {
        nLoopCount = nLoopCount - 1;
        cout << "Only " << nLoopCount;
        cout << " Loops to go " << endl;
    }
    cout<<"Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
