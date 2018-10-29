//OBJECT STREAMS


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main() {


//print stuff to file

/* declares file stream to object 'out'*/
    ofstream out;

/* opens file.txt */
    out.open("~/file.txt", ios::app);

//check that file is open

/* if it's in a bad state (not open) */
    if (!out) { exit(0); }


/* print with word 'out' instead of cout */
    cout << "writing to file: ";
    out << "IDK WHAT IM DOING" << endl;
    cout << "Done!" << endl;

//close file

    out.close();


    return 0;
}