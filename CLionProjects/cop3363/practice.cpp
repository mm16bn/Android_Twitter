//
// Created by Melissa on 2/14/18.
/*You have been given a job as a programmer on a Cyborg supercomputer.
 * In order to accomplish some calculations, you need to know how many bytes
 * the following data types use: char, int, float, and double. You do not have
 * any manuals, so you can’t look this information up. Write a C++ program that
 * will determine the amount of memory used by these types and display the
 * information on the screen.*/


#include <iostream>
using namespace std;

int main()
{
// cout << "size of char: " << sizeof(char) << " byte\n";
//    cout << "size of int: " << sizeof(int) << " bytes\n";
//    cout << "size of float: " << sizeof(float) << " bytes\n";
//    cout << "size of double: " << sizeof(double) << " bytes\n";
//    return 0;
        float test;
        test = 2.0e38 * 1000;
        cout << test << endl;
        test = 2.0e-38 / 2.0e38; // Should underflow test.
        cout << test << endl;
        return 0;


}