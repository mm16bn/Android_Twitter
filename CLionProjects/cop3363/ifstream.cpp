//IFSTREAMS

#include <iostream>
#include <fstream>

using namespace std;

//copies one file into another

int main()
{
    char ch;
    ofstream out;
    ifstream in;

out.open("the original copy.txt", ios::app);
in.open("tocopy.txt");

    /* checks conditions */
if(!out)
    exit(0);
if(!in)
    exit(0);

    /* runs a loop */
while(!in.eof())
{
ch = in.get();
out << ch;
}

in.close();
out.close();
return 0;
}


