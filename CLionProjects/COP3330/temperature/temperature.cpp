/* Melissa Ma
 * COP3330-0003
 * HW #2
 * Summary: DEFINES the functions for a Temperature class,
 * that will set and create a temperature in degrees Celsius,
 * Fahrenheit, and Kelvin, above Absolute Zero. */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include "temperature.h"

using namespace std;

/* Default constructor that initializes
 * temperature to 0 degrees Celsius */
Temperature::Temperature()
{
    degree = 0;
    scale = 'C';
    format = 'D';
}

Temperature::Temperature(double d, char s)
{
    if (s == 'K' && d < 0)
    {
        degree = 0;
        scale = 'C';
    }

    if (s == 'C' && d < -273.15)
    {
        degree = 0;
        scale = 'C';
    }

    if (s == 'F' && d < -459.67)
    {
        degree = 0;
        scale = 'C';
    }

    else if (s != 'K' || s != 'C' || s != 'F' )
    {
        degree = 0;
        scale = 'C';
    }
}

/* takes in user input from the keyboard in the format
 * degree scale */
const void Temperature::Input()
{
    cout << "Enter a temperature: ";


    do
    {
        cin >> degree >> scale;
        cout << "\nInvalid temperature. Try again: ";

    } while (!cin);

}

/* outputs temperature to the screen depending on the
 * the format setting */
const void Temperature::Show()
{
    string written_scale;

    if (scale == 'F')
    {
        written_scale = "Fahrenheit";
    }

    if (scale == 'C')
    {
        written_scale = "Celsius";
    }

    if (scale == 'K')
    {
        written_scale = "Kelvin";
    }

    if (format == 'D')
    {
        cout << degree << ' ' << scale;
    }

    if (format == 'P')
    {
        cout << setprecision(1) << fixed << degree << ' '  << scale;
    }

    if (format == 'L')
    {
        cout << degree << ' ' << written_scale;
    }
}

/* sets temperature to specified values */
bool Temperature::Set(double d, char s)
{
    if (s == 'K' && d < 0)
    {
        return false;
    }

    if (s == 'C' && d < -273.15)
    {
        return false;
    }

    if (s == 'F' && d < -459.67)
    {
        return false;
    }

//    else if (s != 'K' || s != 'C' || s != 'F' )
//    {
//        return false;
//    }
//
    else
    {
        degree = d;
        scale = s;
        return true;
    }

}

/* returns scale to caller */
const char Temperature::GetScale()
{
    return scale;
}

/* returns degrees to caller */
const double Temperature::GetDegrees()
{
    return degree;
}

/* allows caller to change format setting */
bool Temperature::SetFormat(char f)
{

    if (f == 'D' || f == 'P' || f == 'L')
    {
        format = f;
        return true;
    }

    else return false;

}


bool Temperature::Convert(char sc)
{
   if (scale == 'C')
   {
       if (sc == 'F')
       {
           degree = (degree * 9/5) + 32;
       }

       if (sc == 'K')
       {
           degree = degree + 273.15;
       }
   }

    if (scale == 'F')
    {
        if (sc == 'C')
        {
            degree = (degree - 32) * 5/9;
        }

        if (sc == 'K')
        {
            degree = 5/9 * ( degree - 32) + 273.15;
        }
    }

    if (scale == 'K')
    {
        if (sc == 'C')
        {
            degree = degree -273.15;
        }

        if (sc == 'F')
        {
            degree = 9/5 * (degree -273.15) + 32;
        }
    }
    else
    {
        return false;
    }

    return true;
}

/* compares the current temperature to the
 * new scale given in the parameter */
//const int Temperature::Compare(const Temperature &d) {
//
//}












