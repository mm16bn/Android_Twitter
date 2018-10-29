/* Melissa Ma
 * COP3330-0003
 * HW #3
 * Summary: DEFINES the functions for a Distance class,
 * that will store a distance in terms of miles, yards,
 * inches, and feet. */

#include <iostream>
#include "distance.h"

using namespace std;

/* default constructor that initializes
 * each distance at 0 */
Distance::Distance() {
    miles = 0;
    yards = 0;
    feet = 0;
    inches = 0;
}

/* conversion constructor that allows
 * automatic type conversions from "int" to
 * "Distance" */
Distance::Distance(int i) {
    if (i < 0)
    {
        inches = 0;
    }

    else if (i >= 63360)
        {
            miles = i / 63360;
            i = i % 63360;

            if (i >= 36)
            {
                yards = i / 36;
                i = i % 36;

                if (i >= 12)
                {
                    feet = i / 12;
                    i = i % 12;
                    inches = i;
                }

                else
                {
                    feet = 0;
                    inches = i;
                }
            }

            else
            {
                yards = 0;
                feet = 0;
                inches = i;
            }
        }

    else
    {
        miles = 0;
        yards = 0;
        feet = 0;
        inches = i;
    }

}

/* constructor that sets each distance value to 0 if negative,
 * and simplifies to a larger unit if possible */
Distance::Distance(int m, int y, int f, int i) {

        if (m < 0) {
            miles = 0;
        } else {
            miles = m;
        }

        if (y < 0) {
            yards = 0;

        } else if (y >= 1760) {

            miles = m + (y / 1760);
            y = y % 1760;

        } else {
            yards = y;
        }

        if (f < 0) {
            feet = 0;
        } else if (f >= 3) {
            yards = y + (f / 3);
            f = f % 3;
            feet = f;
        }

        else {
            feet = f;
        }

        if (i < 0) {
            inches = 0;
        } else if (i >= 12) {
            feet = f + (i / 12);
            i = i % 12;
            inches = i;

        } else {
            inches = i;
        }

    }



/* prints the Distance object in the format:
 * (MILESm YARDSy FEET' INCHES") */
ostream &operator<<(ostream &s, const Distance &d) {
    s << "(";
    if (d.miles != 0)
    {
        s << d.miles << "m ";
    }
    if (d.yards !=0)
    {
        s << d.yards << "y ";
    }
    if (d.feet !=0)
    {
        s << d.feet << "\' ";
    }
    s << d.inches << "\")";
    return s;
}

/* reads Distance objects in the format Miles,
 * Yards, Feet, Inches. */
istream &operator>>(istream &s, Distance &d) {
    char comma;

    s >> d.miles >> comma >> d.yards >> comma
      >> d.feet >> comma >> d.inches;

    if ((d.miles < 0) || (d.yards < 0) || (d.feet < 0) || (d.inches < 0))
    {
        Distance();
    }

    else
    {
        Distance(d.miles, d.yards, d.feet, d.inches);
    }

    return s;
}

/* one Distance object is added to another */
Distance operator+(const Distance &d1, const Distance &d2) {

    int total_miles = d1.miles + d2.miles;
    int total_yards = d1.yards + d2.yards;
    int total_feet = d1.feet + d2.feet;
    int total_inches = d1.inches + d2.inches;

    return Distance(total_miles, total_yards, total_feet, total_inches);
}

/* one Distance object is subtracted from another */
Distance operator-(const Distance &d1, const Distance &d2) {

    int diff_miles = d1.miles - d2.miles;
    int diff_yards = d1.yards - d2.yards;
    int diff_feet = d1.feet - d2.feet;
    int diff_inches = d1.inches - d2.inches;

    return Distance(diff_miles, diff_yards, diff_feet, diff_inches);
}

/* the Distance object is multipled with an integer multiplier */
Distance operator*(const Distance &d, const int multiple) {

    int mult_miles = d.miles * multiple;
    int mult_yards = d.yards * multiple;
    int mult_feet = d.feet * multiple;
    int mult_inches = d.inches * multiple;

    return Distance(mult_miles, mult_yards, mult_feet, mult_inches);
}

/* returns true for first Distance object being GREATER than
 * the second Distance object */
bool operator>(const Distance &d1, const Distance &d2) {

    if (d1.miles > d2.miles)
    {
        return true;
    }

    else if (d1.miles < d2.miles)
    {
        return false;
    }

    else
    {
        if (d1.yards > d2.yards)
        {
            return true;
        }

        else if (d1.yards < d2.yards)
        {
            return false;
        }

        else
        {
            if (d1.feet > d2.feet)
            {
                return true;
            }

            else if (d1.feet < d2.feet)
            {
                return false;
            }

            else
            {
                if (d1.inches > d2.inches)
                {
                    return true;
                }

                else if (d1.inches <= d2.inches)
                {
                    return false;
                }
            }
        }
    }

    return false;
}

/* returns true for first Distance object being LESS than
 * the second Distance object */
bool operator<(const Distance &d1, const Distance &d2) {
    if (d1.miles < d2.miles)
    {
        return true;
    }

    else if (d1.miles > d2.miles)
    {
        return false;
    }

    else
    {
        if (d1.yards < d2.yards)
        {
            return true;
        }

        else if (d1.yards > d2.yards)
        {
            return false;
        }

        else
        {
            if (d1.feet < d2.feet)
            {
                return true;
            }

            else if (d1.feet > d2.feet)
            {
                return false;
            }

            else
            {
                if (d1.inches < d2.inches)
                {
                    return true;
                }

                else if (d1.inches >= d2.inches)
                {
                    return false;
                }
            }
        }
    }

    return false;
}

/* returns true for first Distance object being GREATER than
 * OR EQUAL TO the second Distance object */
bool operator>=(const Distance &d1, const Distance &d2) {

    if (d1.miles < d2.miles)
    {
        return false;
    }

    else
    {
        if (d1.yards >= d2.yards)
        {
            return true;
        }

        else
        {
            if (d1.feet >= d2.feet)
            {
                return true;
            }

            else
            {
                if (d1.inches >= d2.inches)
                {
                    return true;
                };
            }
        }
    }

    return d1.miles >= d2.miles;

}


/* returns true for first Distance object being LESS than
 * OR EQUAL TO the second Distance object */
bool operator<=(const Distance &d1, const Distance &d2) {
    if (d1.miles > d2.miles)
    {
        return false;
    }

    else if (d1.miles == d2.miles)
    {
        if (d1.yards <= d2.yards)
        {
            return true;
        }

        else
        {
            if (d1.feet <= d2.feet)
            {
                return true;
            }

            else
            {
                if (d1.inches <= d2.inches)
                {
                    return true;
                };
            }
        }
    }
    return d1.miles <= d2.miles;
}

/* returns true for first Distance object being NOT EQUAL
 * to the second Distance object */
bool operator!=(const Distance &d1, const Distance &d2) {
    return (d1.miles != d2.miles) || (d1.yards != d2.yards)
           || (d1.feet != d2.feet) || (d1.inches != d2.inches);
}

/* returns true for first Distance object being EQUAL
 * to the second Distance object */
bool operator==(const Distance &d1, const Distance &d2) {

    return (d1.miles == d2.miles) && (d1.yards == d2.yards)
           && (d1.feet == d2.feet) && (d1.inches == d2.inches);

}


/* Postfix increment */
Distance Distance::operator++(int ) {

    Distance temp = *this;
    inches++;
    return temp;
}

/* Prefix increment */
Distance &Distance::operator++() {

    inches ++;
    return *this;
}

/* Postfix decrement */
Distance Distance::operator--(int) {

    Distance temp = *this;
    inches --;
    return temp;
}

/* Prefix decrement */
Distance &Distance::operator--() {

    inches --;
    return *this;
}










