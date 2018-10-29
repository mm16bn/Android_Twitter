/////////////////////////////////////////////////////////
// Bob Myers
//
// sample.cpp -- sample test program starter for Temperature class
/////////////////////////////////////////////////////////

#include <iostream>
#include "temperature.h"

using namespace std;

int main()
{
    Temperature t1;		// should default to 0 Celsius
    Temperature t2(34.5, 'F');  // should init to 34.5 Fahrenheit

    // display dates to the screen
    cout << "\nTemperature t1 is: ";
    t1.Show();
    cout << "\nTemperature t2 is: ";
    t2.Show();

    t1.Input();			// Allow user to enter a temperature for t1
    cout << "\nTemperature t1 is: ";
    t1.Show();

    t1.SetFormat('L');		// change format of t1 to "Long" format
    cout << "\nTemperature t1 is: ";
    t1.Show();

    if (!t1.Set(20.5, 'c'))
    {
        cout << "was not set" << endl;
    }


    if (!t1.Convert('k'))
    {
        cout << "error" << endl;
    }

    if (!t1.Convert('h'))
    {
        cout << "error" << endl;
    }

    if(!t1.Convert(t2.GetScale()))
    {
        cout << "error" << endl;
    }


    // and so on.  Add your own tests to fully test the class'
    //   functionality.
}
