/*Name: Guadalupe Zepeda
Date: 09/29/18
Section: Section 7
Assignment: Assignment 2
Due Date: 09/29/18
About this project: Read in 3 numbers from user and print them in descending order
Assumptions: The user will input proper type of data for all 3 numbers. No characters or text.

 All work below was performed by Guadalupe Zepeda*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double num1, num2, num3;  //num1 is first input, num2 is second input, num3 is third input
    double a, b, c;           //a is the biggest number, b is the middle number, and c is the lowest number

    cout<<"Enter 3 numbers:"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    if ((num1==num2) && (num2==num3) && (num1==num3))       //If all 3 input numbers are equal, program exits.
        cout<<"You entered the same number 3 times. Exiting";
    else {
        if ((num1 >= num2) && (num1 >= num3))  //if num1 is greater than or equal to num2 and greater than or equal to num3, then num1 is biggest
        {
            if (num2 >= num3)     //if num2 is greater than or equal to num3, then num2 is middle number
            {
                num1 = a;       //num1 is the biggest number
                num2 = b;       //num2 is the middle number
                num3 = c;       //num3 is the smallest number
            }
            else                //if num2 is not greater than equal to num3, then num3 is the middle number
            {
                num1 = a;       //num 1 is the biggest number
                num3 = b;       //num 3 is the middle number
                num2 = c;       //num2 is the smallest number
            }
        }
        if ((num2 >= num1) && (num2 >= num3)) //if num2 is greater than or equal to num1 and greater than or equal to num3, then num2 is biggest
        {
            if (num1 >= num3)   //if num1 is greater than or equal to num3, then num1 is middle number
            {
                num2 = a;       //num 2 is the biggest number
                num1 = b;       //num 1 is the middle number
                num3 = c;       //num 3 is the smallest number
            }
            else                //if num1 is not greater than equal to num3, then num3 is the middle number
            {
                num2 = a;       //num 2 is the biggest number
                num3 = b;       //num 3 is the middle number
                num1 = c;       //num 1 is the smallest number
            }
        }
        if ((num3 >= num1) && (num3 >= num2)) //if num3 is greater than or equal to num1 and greater than or equal to num2,then num3 is biggest
        {
            if (num1 >= num2)     //if num1 is greater than or equal to num2, then num1 is middle number
            {
                num3 = a;       //num 3 is the biggest number
                num1 = b;       //num 1 is the middle number
                num2 = c;       //num 2 is the smallest number
            }
            else                //if num1 is not greater than or equal to num2, then num2 is middle number
            {
                num3 = a;       //num 3 is the biggest number
                num2 = b;       //num 2 is the middle number
                num1 = c;       //num 1 is the smallest number
            }
        }

    }

    cout << a <<" " << b << " " << c << endl;
    cout << "test" << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}