/* Melissa Ma
 * COP3330-0003
 * HW #3
 * Summary: DECLARES the functions for a Distance class,
 * that will store a distance in terms of miles, yards,
 * inches, and feet. */

#include <iostream>
using namespace std;

class Distance {

    /* operator overloads */
    friend ostream& operator << (ostream &s, const Distance &d);
    friend istream& operator >> (istream &s, Distance &d);
    friend Distance operator+ (const Distance &, const Distance &);
    friend Distance operator- (const Distance &, const Distance &);
    friend Distance operator* (const Distance &, int m);

    friend bool operator> (const Distance &, const Distance &);
    friend bool operator< (const Distance &, const Distance &);
    friend bool operator>= (const Distance &, const Distance &);
    friend bool operator<= (const Distance &, const Distance &);
    friend bool operator!= (const Distance &, const Distance &);
    friend bool operator== (const Distance &, const Distance &);


public:


    Distance();
    explicit Distance(int i);
    Distance(int m, int y, int f, int i);

    /* increment and decrement operators */
    Distance operator++ (int);      // postfix increment
    Distance &operator++ ();        // prefix increment
    Distance operator-- (int);      // postfix decrement
    Distance &operator-- ();        // prefix decrement

private:
    int miles;      // distance in miles, no limit
    int yards;      // distance in yards, limit of 1760
    int feet;       // distance in feet, limit of 3
    int inches;     // distance in inches, limit of 12

};

