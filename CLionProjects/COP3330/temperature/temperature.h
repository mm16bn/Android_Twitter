/* Melissa Ma
 * COP3330-0003
 * HW #2
 * Summary: DECLARES the functions for a Temperature class,
 * that will set and create a temperature in degrees Celsius,
 * Fahrenheit, and Kelvin, above Absolute Zero. */

class Temperature {

public:
    Temperature();
    Temperature(double degree, char scale);

    // standard input and output functions
    const void Input();
    const void Show();

    // mutator functions
    bool Set(double d, char s);
    bool SetFormat(char f);
    bool Convert (char s);

    // accessor functions
    const double GetDegrees();
    const char GetScale();
    const int Compare(const Temperature &d);

private:
    double degree;
    char scale;
    char format;

};

