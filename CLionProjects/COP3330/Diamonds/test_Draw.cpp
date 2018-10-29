#include <iostream>

using namespace std; 

int main()
{

const int size = 2; 
char border = '#';
char fill = '*';

    for (int i = 0; i < size; i++)
    {
        for (int num = 0; num <= size; num ++)
        {
            if (num == 1)
            {
                cout << border; 
            }
            
            else if (num == size)
            {
                cout << border << endl;
            }
            
            else 
            {
                cout << fill; 
            }
        }

    }

}
