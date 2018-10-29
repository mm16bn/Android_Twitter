// Sample main program to test a few Distance class features
//  Write your own calls to test more thoroughly!!
// Author:  Bob Myers

#include <iostream>
#include "distance.h"

using namespace std;

int main()
{
    Distance d1, d2, d3(123456), d4(987654321), d5(1, 1760,3, 12);
    cout << "d1 = " << d1 << '\n';
    cout << "d2 = " << d2 << '\n';
    cout << "d3 = " << d3 << '\n';
    cout << "d4 = " << d4 << '\n';
    cout << "d5 = " << d5 << '\n';

    cout << "Enter first Distance object (MILES,YDS,FT,IN):  ";
    cin >> d1;

    cout << "Enter second Distance object (MILES,YDS,FT,IN):  ";
    cin >> d2;

    cout << "\n\n";
    cout << d1 << " + " << d2 << " = " << d1 + d2 << '\n';
    cout << d1 << " - " << d2 << " = " << d1 - d2 << "\n\n";

    if (d1 < d2) 	cout << d1 << " <  " << d2 << " is TRUE\n";
    if (d1 > d2) 	cout << d1 << " >  " << d2 << " is TRUE\n";
    if (d1 <= d2) 	cout << d1 << " <= " << d2 << " is TRUE\n";
    if (d1 >= d2) 	cout << d1 << " >= " << d2 << " is TRUE\n";
    if (d1 == d2) 	cout << d1 << " == " << d2 << " is TRUE\n";
    if (d1 != d2) 	cout << d1 << " != " << d2 << " is TRUE\n\n";

    cout << d1 << " + 654321 = " << d1 + Distance(123456) << '\n';
    cout << d2 << " + 15263748 = " << d2 + Distance(987654321) << '\n';

    cout << "d1++ " << d1++ << endl;
    cout << "++d1 " << ++d1 << endl;
    cout << "d1-- " << d1-- << endl;
    cout << "--d1" << --d1 << endl;


}

