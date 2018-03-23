/* Name: Melissa Ma
Date: 3/8/2018
Section: 7
Assignment: 5
Due Date: 3/26/2018
About this project: I want to manipulate the data in arrays.
Assumptions:

All work below was performed by: Melissa Ma */


#include <iostream>
#include <iomanip>
using namespace std;


void PrintArray (const int arr[], const int size);
void FillArray(int arr[], const int size);


void Insert(int arr[], const int size, int add, int index);
void Delete(int arr[], const int size, int index);
void Reverse(int arr[], const int size);
void Sort(int arr[], const int size);

int Mean(int arr[], const int size);
int Median(int arr[], const int size);


int main()
{
    /* We'll set the test size to 15.  Use this constant in your calls
     *  instead of the literal 15.  Then, by changing this line, you can
     *  easily test arrays of different sizes. */
    const int size = 5;

    /* Declare your array of size SIZE*/
    int arr[size];


    /* Declare variable for user input of menu choice */
    char MenuChoice;

    /* Constants for menu choices */
    const char PRINT_ARRAY = 'P';
    const char FILL_ARRAY = 'F';

    const char INSERT = 'I';
    const char DELETE = 'D';
    const char REVERSE = 'R';
    const char SORT = 'S';
    const char MEAN = 'X';
    const char MEDIAN = 'Y';

    const char MENU = 'M';
    const char QUIT = 'Q';

    /* Displays menu and takes in choice */
    cout << "** Given features **\n" <<
    "P      Print the array contents\n" <<
    "F      Fill the array (user entry)\n\n" <<

         "** Function Tests **\n" <<
    "I      Insert\n" <<
    "D      Delete\n" <<
    "R      Reverse\n" <<
    "S      Sort\n" <<
    "X      Mean\n" <<
    "Y      Median\n\n" <<

    "M      Print this menu\n" <<
    "Q      Quit this program" << endl;

    /*Loop that presents user with menu options and calls appropriate Array functions*/

    do {
        cout << "\nEnter your menu selection: " << endl;
        cin >> MenuChoice;

        switch (MenuChoice) {
            case PRINT_ARRAY: {
                PrintArray(arr, size);
                break;
            }

            case FILL_ARRAY: {
                FillArray(arr, size);
                break;
            }

            case INSERT: {
                int add;
                int index;

                cout << "Enter value to insert: " << endl;
                cin >> add;
                cout << "Enter index at which to insert: " << endl;
                cin >> index;

                Insert(arr, size, add, index);
                PrintArray(arr, size);
                break;
            }

            case DELETE: {
                int index;
                cout << "Enter index of item to delete: " << endl;
                cin >> index;
                Delete(arr, size, index);

                if(index > size)
                    {break;}

                PrintArray(arr, size);
                break;
            }

            case REVERSE: {
                Reverse(arr, size);
                PrintArray(arr, size);
                break;
            }

            case SORT: {
                Sort(arr, size);
                PrintArray(arr, size);
                break;
            }

            case MEAN: {
                cout << fixed << showpoint << setprecision(1);
                Mean(arr, size);
                break;
            }

//            case MEDIAN: {
////                cout << fixed << showpoint << setprecision(1) << Median(arr, size);
//                break;
//            }

            case MENU: {
                cout << "** Given features **\n" <<
                     "P      Print the array contents\n" <<
                     "F      Fill the array (user entry)\n\n" <<

                     "** Function Tests **\n" <<
                     "I      Insert\n" <<
                     "D      Delete\n" <<
                     "R      Reverse\n" <<
                     "S      Sort\n" <<
                     "X      Mean\n" <<
                     "Y      Median\n\n" <<

                     "M      Print this menu\n" <<
                     "Q      Quit this program" << endl;
                break;
            }

            default:
                cout << "nothing is happening!";
                break;

        }

    }while (MenuChoice != 'Q');


//PrintArray();

    return 0;
}


/* Add in the definitions of your own functions HERE */

/* Inserts numbers wherever you want! */
void Insert(int arr[], const int size, int add, int index) {
for(index; index < size; index++) {
    int temp = arr[index];
    arr[index] = add;
    add = temp;
}
}

/* Deletes the chosen one, then replaces last digit(s) with zero */
void Delete(int arr[], const int size, int index)
{
for(index; index < size; index++)
{
arr[index] = arr[index + 1];
    arr[size-1] = 0;
}
}

/* Prints the array backwards! */
void Reverse(int arr[], int size) {
    const int index = size - 1;
    for(int i = 0; i < index/2; i++) {
        int temp = arr[i];
        arr[i] = arr[index -  i];
        arr[index - i] = temp;
    }
}

/* Sorts the array in ascending order */
void Sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

/* Calculates the average of all numbers in array */
int Mean(int arr[], int size)
{
    int sum = 0;
    int average;
    for(int i = 0; i < size - 1; i++)
    {
        sum = sum + arr[i];
        average = sum / size;
        return average;
    }
}

//int Median(int arr[], int size)
//{
//
//}
//




/* Definitions of PrintArray and FillArray below DO NOT CHANGE THESE!*/

//PrintArray Function
//This function prints the contents of any interger array of any size seperated by commas
void PrintArray(const int arr[], const int size)
{
    cout << "\nThe array:\n { ";
    for (int i = 0; i < size-1; i++)     // for loop, prints each item (not last due to comma handling)
        cout << arr[i] << ", ";

    cout << arr[size-1] << " }\n";       // prints last item , no comma
}

//FillArray Function
//Allows the user to enter data into any integer array of any size.
void FillArray(int arr[], const int size)
{
    cout << "Please enter " << size
         << " integers to load into the array\n> ";

    for (int i = 0; i < size; i++)
        cin >> arr[i];
}