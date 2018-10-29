/* Name: Melissa Ma
Date: 01/24/2018
Section: 8
Assignment: 2
Due Date: 1/29/2018
About this project: using basic selection statements, i write a basic grade calculating program for this class! :)
Assumptions: assumes valid entries for grades.

All work below was performed by Melissa Ma */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

double hw1, hw2, hw3, hw4, hw5, hw6, hw7;
double rec1, rec2, rec3, rec4, rec5, rec6;
double test1, test2, final;
double extra_credit;
double hw_ave, test_ave, course_ave;
char ch;


cout << "\nWelcome to the Grade Calculator!\n";
cout << "\nHOMEWORK GRADES -->\n";
cout << "Homework 1: ";
cin >> hw1;
cout << "Homework 2: ";
cin >> hw2;
cout << "Homework 3: ";
cin >> hw3;
cout << "Homework 4: ";
cin >> hw4;
cout << "Homework 5: ";
cin >> hw5;
cout << "Homework 6: ";
cin >> hw6;
cout << "Homework 7: ";
cin >> hw7;

cout << "\nRECITATION GRADES -->\n" << "Recitation 1: ";
cin >> rec1;
cout << "Recitation 2: ";
cin >> rec2;
cout << "Recitation 3: ";
cin >> rec3;
cout << "Recitation 4: ";
cin >> rec4;
cout << "Recitation 5: ";
cin >> rec5;
cout << "Recitation 6: ";
cin >> rec6;

cout << "\nTEST GRADES -->" << "\nMidterm I: ";
cin >> test1;
cout << "Midterm II: ";
cin >> test2;
cout << "Final: ";
cin >> final;

cout << "\nIs there any extra credit to add in? (Y or N) --> ";
cin >> ch;

if (ch =='Y' || ch == 'y')
{cout << "How many extra credit points should be added? --> ";
cin >> extra_credit;

}

else if (ch == 'N' || ch == 'n')
{cout << endl;}

else
{cout << "\nInvalid option, exiting program." << endl;
}

    hw_ave = ((hw1+hw2+hw3+hw4+hw5+hw6+hw7+rec1+rec2+rec3+rec4+rec5+rec6+extra_credit)/820)*100;
test_ave = ((test1 * 17.5) + (test2 *17.5) + (final*25))/60;
course_ave = ((test1*.175) + (test2*.175) + (final*.25) + (hw_ave*.4));

cout << fixed << showpoint << setprecision(2) << "\nHomework Average: " << hw_ave << "%" << endl;
cout << fixed << showpoint << setprecision(2) << "Test Average: " << test_ave << "%" << endl;
cout << fixed << showpoint << setprecision(2) << "Course Average: " << course_ave << "%" << endl;

cout << "Course Grade: ";
if (course_ave >=90)
{cout << "A\n";}

if (course_ave >=80 && course_ave <90)
{cout << "B\n";}

if (course_ave >=69 && course_ave <80)
{cout << "C\n";}

if (course_ave >=60 && course_ave <69)
{cout << "D\n";}

if (course_ave <60)
{cout << "F\n";}

cout << endl;
return 0;
}
