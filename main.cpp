#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberofArgs, char*pszArgs[])
{

    //enter the temperature in Celsius
    int celsius;
    cout<<"Enter the temperature in Celsius: ";
    cin>>celsius;

    int factor;
    factor = 212-32;

    //calculate conversion factor for Celsius
    //into Fahrenheit values
    int fahrenheit;
    fahrenheit = factor * celsius/100 +32;

    //output the results (followed by a NewLine)
    cout<< "Fahrenheit value is: ";
    cout<< fahrenheit << endl;


    //wait until the user is ready before terminating the program
    //to allow the user to see the program results

    cout<< "Press Enter to continue... " << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

