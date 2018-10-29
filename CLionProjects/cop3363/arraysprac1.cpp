//
// declares an int array (size 50) and initalizes all values
// to a random # between 5 and 10


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    srand(0);
    int arr1[50];                    //initalizes 50 variables. declare type of array
    for(int i = 0; i < 50; i++) {   //runs 50 times
        arr1[i] = rand()%6 + 5;      //prints a number between 5 and 10
    }

    //declares a character array that stores each letter of the alphabet
//    const char arr3[26] = {'a', 'b', 'c'...};

    //to sort numbers in arrays:
    const int size = 10;    //array at element size (arr[size] doesn't exist; last is
                                //size - 1;
    int arr2[size];          //can take in variables if they're numbers
    int temp;               //a placeholder; need a middle man
    bool swap;              //gets initialized


    do {
        swap = false;
        for (int i = 0; i < size - 1; i++) {        //because i+1 would be out of bounds when i = size
            if (arr2[i] > arr2[i + 1]) {
                temp = arr2[i];          //doesn't replace one value with another right before
                //it's replaced
                arr2[i] = arr2[i + 1];
                arr2[i + 1] = temp;
                swap = true;
            }
        }
    }while (swap);


    //PASS ARRAY AS VARIABLE IN PARAMETERS
    void SortArray(int arr[], int size);            //declares an array of type int, and length of array
    void PrintArray(const int arr[], int size);     //doesn't change the value of the array by dec "const"
    //main
    int arr[10];
    SortArray(arr, 10);                             //array doesnt have brackets! just say the name of the array
                                                    //has access to the original array

    void SortArray(int arr[], int size);
    //sorting the array



return 0;
}