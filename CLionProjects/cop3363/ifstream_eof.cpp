//
// Created by Melissa on 4/12/18.
//
#include <iostream>
#include <fstream>

using namespace std;

/*counts sum of numbers in a file;
only works if there's no trailing white space, ends
with a digit */

int main() {

    int sum = 0;
    int x;
    ifstream in;

    /* creates array of chars from text file */
    char arr[40];

    cout << "enter a filename; ";
    cin >> arr;

    /* reads in file without changing */

    in.open(arr);

    if (!in) {
        cout << "error";
        exit(0);
    }

    if (!in.eof()) {
        in >> x;

        /*if you're reading in white space:*/
        if(!in.fail())  //nothing new got read in
        {
            sum += x;
        }
    }

    cout << "Sum is: " << sum << endl;


    return 0;
}