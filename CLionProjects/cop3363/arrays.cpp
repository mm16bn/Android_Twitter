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

double Mean(const int arr[], const int size);
double Median(int arr[], const int size);


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
        cout << "\nEnter your menu selection: ";
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
                cout << "The mean is: " << Mean(arr, size);
                break;
            }

            case MEDIAN: {
                cout << fixed << showpoint << setprecision(1);
                cout << "The median is: " << Median(arr, size);
                break;
            }

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

            case QUIT:
            {break;}

            default:
                cout << "\nThat wasn't an option! Try again!";
                break;

        }

    }while (MenuChoice != 'Q');

PrintArray(arr, size);
    return 0;
}

/* Definitions of Menu Functions: */

/* Inserts numbers wherever you want! */
void Insert(int arr[], const int size, int add, int index) {

for(index; index < size; index++) {
    int temp = arr[index];              //a temporary storage space used to swap two numbers in an array
    arr[index] = add;
    add = temp;
}
}

/* Deletes the number at the index, then replaces last digit(s) with zero */
void Delete(int arr[], const int size, int index)
{
    int times = 0;                      //the number of times this function is called

    for(index; index <= size - 1; index++)
        {arr[index] = arr[index + 1];
            cout << "else is happening\n";
            if(index == size - 1)
            {arr[index] = 0;
                cout << "if is happening!\n";}
        }

    cout << "times is increasing\n";
    times ++;
}

/* Prints the array backwards! */
void Reverse(int arr[], int size) {
    for(int i = 0; i < (size - 1)/2; i++) {
        int temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
}

/* Sorts the array in ascending order */
void Sort(int arr[], int size) {
    bool sort;

    do {sort = false;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sort = true;
            }
        }
    } while (sort);
}

/* Calculates the average of all numbers in array */
double Mean(const int arr[], int size) {
    double sum = 0;                     //the sum of all numbers in the array
    double average;                     //the calculated mean of all numbers
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    average = sum / size;
    return average;
}

/* Finds or calculates the median of the series */
double Median(int arr[], int size)
{
    if(size%2==0)
{
    int list[2] = {arr[size/2-1], arr[size/2]};
    return Mean(list, 2);
}
    else{
    return arr[size/2];
}
}

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