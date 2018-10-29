/* Melissa Ma
 * COP3330-0003
 * HW #1
 * Summary: DEFINES the functions for a Diamond class,
 * that will set and create a diamond whose sides are integers
 * in the range of 1-39. */

#include <iostream>
#include <iomanip>
#include <cmath>
#include "diamond.h"

using namespace std;

/* Default constructor. initializes a rhombus of
 * length size 1, border '#', and fill '*' */

Diamond::Diamond()
{
    size = 1;
    border = '#';
    fill = '*';
}

Diamond::Diamond(int x, char y, char z)
{
    if (x < 1)
    {
        size = 1;
    }

    else if (x > 39)
    {
        size = 39;
    }

    else if (x > 1 && x < 39)
    {
        size = x;
    }

    if (!SetBorder(y))
    {
        SetBorder('#');
    }

    if (!SetFill(z))
    {
        SetFill('*');
    }
}


/* returns the length of a side of the rhombus */
int Diamond::GetSize()
{
    return size;
}

/* returns the perimeter of the rhombus */
int Diamond::Perimeter()
{
    int perimeter = 4 * size;
    return perimeter;
}

/* returns the area of the rhombus */
double Diamond::Area()
{
    double diagonal = size * sqrt(3);
    double area = (size * diagonal / 2);
    return area;
}

/* increases side length by 1 */
int Diamond::Grow()
{
    if (size != 39)
    {
        size = size + 1;
        return size;
    } else
    {
        return size;
    }
}

/* decreases side length by 1 */
int Diamond::Shrink()
{
    if (size != 1)
    {
        size = size - 1;
        return size;
    }

    else
    {
        return size;
    }
}

/* sets the border character */
bool Diamond::SetBorder(char b)
{

    if ((b < 33) || (b > 126))
    {
        return false;
    }

    else
    {
        border = b;
        return true;
    }
}

/* sets the fill character */
bool Diamond::SetFill(char f)
{
    if ((f < 33) || (f > 126))
    {
        return false;
    }
    else
    {
        fill = f;
        return true;
    }
}

/* draws the rhombus */
void Diamond::Draw()
{
    int run = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        cout << border << " ";

        if (i > 0)
        {
            for (int k = 1; k < run; k++)
            {
                cout << fill << " ";
            }
            run+=1;
            cout << border;
        }
        cout << endl;
    }

    run-=4;

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout << " ";
        }

        cout << border << " ";

        for (int k= 0; k <= run; k++)
        {
            cout << fill << " ";
        }
        run-=1;

        if (i != size - 1)
        {
            cout << border;
        }
        cout << endl;
    }
}

/* prints out a summary of information for each diamond */
void Diamond::Summary()
{
    cout << "Size of diamond's side = " << size << " units." << endl;
    cout << "Perimeter of diamond = " << Diamond::Perimeter() << " units." << endl;
    cout << "Area of diamond = " << setprecision(2) << fixed << Diamond::Area() << " units." << endl;
    cout << "Diamond looks like: " << endl;
    Diamond::Draw();
}

