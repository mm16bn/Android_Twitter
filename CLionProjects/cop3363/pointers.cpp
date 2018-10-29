//
// Created by Melissa on 3/27/18.
//


#include <iostream>
using namespace std;

int main()

{

    /* PART ONE */
int x = 10;
int * ptr;
ptr = &x;

/* couts the address of the variable x*
 * both do the same thing! */

    cout << ptr << endl;
    cout << &x << endl;



    /*couts the memory location's data*/

    cout << *ptr << endl;   //10; *ptr = x;
    cout << ptr << endl;    //5000

    /* PART TWO */

    double y;
    y = 3.35;
    double *ptr = &y;       //declares & initializes pointer for addr of y

    cout << y;      //3.35
    cout << *ptr;   //3.35
    cout << &y;     //1234 (addr of y)
    cout << ptr;    //1234
    cout << &ptr;   //address of pointer

    return 0;
}