/* Name: Melissa Ma
Date: 3/29/2018
Section: 8
Assignment: 6
Due Date: 4/3/2018
About this project: Practice with C-strings or string objects, takes in user
input and returns amazing results!
Assumptions: User input is valid, and the user wants to get things done.

All work was performed by: Melissa Ma */

#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void PrintString(char arr[]);
void UpperCase(char arr[]);
void LowerCase(char arr[]);
void Replace(char arr[], char, char);
void Statistics(char arr[]);
char NewString(char arr[]);
void Jazz(char arr[]);
void Menu();

int main()
{
    /* The user chooses an option off the menu */
    char MenuChoice;

    /* Seed random number generator */
    srand(time(0));

    /* The user enters a string into a char array */
    const int size = 100;
    char input[size];

    /* Initializes parameters in Replace Function */
    char ReplaceThis;
    char Replacement;

    /* Constants for menu choices */
    const char PRINT_STRING = '1';
    const char UPPERCASE = '2';
    const char LOWERCASE = '3';
    const char REPLACE = '4';
    const char STATISTICS = '5';
    const char NEW_STRING = '6';
    const char JAZZ_IT_UP = '7';
    const char SHOW_MENU = '8';
    const char QUIT = '0';

    /* Takes in user input for string: */
    cout << "To get started, enter anything you'd like, then hit enter: " << endl;
    NewString(input);
    /* Prints the menu once off the bat */
    Menu();

    /* Loop that calls functions chosen from menu */

    do
    {
        cout << "\nSelection -----> ";
        cin >> MenuChoice;

        switch(MenuChoice)
        {
            case PRINT_STRING:
            {
                PrintString(input);
                break;
            }

            case UPPERCASE:
            {
                UpperCase(input);
                PrintString(input);
                break;

            }

            case LOWERCASE:
            {
                LowerCase(input);
                PrintString(input);
                break;
            }

            case REPLACE:
            {
                cout << "Replace all of these characters: ";
                cin >> ReplaceThis;
                cout << "\nTo these characters: ";
                cin >> Replacement;
                Replace(input, ReplaceThis, Replacement);
                break;
            }

            case STATISTICS:
            {
                Statistics(input);
                break;
            }

            case NEW_STRING:
            {
                cin.ignore();
                cout << "Enter a new string: ";
                NewString(input);
                PrintString(input);
                break;
            }

            case JAZZ_IT_UP:
            {
                Jazz(input);
                break;
            }

            case SHOW_MENU:
            {
                Menu();
                break;
            }

            case QUIT:
            {
                cout << "\nBye!" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice! Try again: " << endl;
                break;
            }

        }

    } while (MenuChoice != '0');

    return 0;
}

/* the functions and what they do: */

/* Prints menu */
void Menu()
{
    cout << "\nString Manipulator Options Menu\n" <<
            "-------------------------------\n" <<
            "1 - Print the current string\n" <<
            "2 - Make the string all Uppercase\n" <<
            "3 - Make the string all Lowercase\n" <<
            "4 - Replace a character\n" <<
            "5 - Show string statistics\n" <<
            "6 - Enter a new string\n" <<
            "7 - Jazz things up... (You'll lose your current string!)\n" <<
            "8 - Show this menu\n" <<
            "0 - Quit\n";
}

/* Prints current string input */
void PrintString(char arr[])
{
    cout << "Current String: ";

    for(int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i];
    }
}

/* Makes entire string uppercase */
void UpperCase(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    {
        arr[i] = toupper(arr[i]);
    }

}

/* Makes entire string lowercase */
void LowerCase(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    {
        arr[i] = tolower(arr[i]);
    }
}

/* Replaces one kind of character with another */
void Replace(char arr[], char ReplaceThis, char ToThat)
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {

        if(arr[i] == ReplaceThis)
        {
            arr[i] = ToThat;
            count++;
        }
    }
    cout << count << " characters replaced.\n";

}

/* Prints the number of letters, punctuation, digits,
 * and whitespace in the string */
void Statistics(char arr[])
{
    int letters_count = 0;
    int punctuation_count = 0;
    int digits_count = 0;
    int whitespace_count = 0;

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(isalpha(arr[i]) != 0)
        {
            letters_count++;
        }

        if(ispunct(arr[i]) != 0)
        {
            punctuation_count++;
        }

        if(isdigit(arr[i]) != 0)
        {
            digits_count++;
        }

        if(isspace(arr[i]) != 0)
        {
            whitespace_count++;
        }
    }

    cout << "\nLetters: " << letters_count;
    cout << "\nPunctuation: " << punctuation_count;
    cout << "\nDigits: " << digits_count;
    cout << "\nWhitespace: " << whitespace_count << endl;
}

/* Prints nonsense. */
void Jazz(char jazzy_arr[])
{
    cout << "\nYou like jazz?" << endl;
    int size = rand() % 50 + 1;

        for (int i = 0; i < size; i++)
        {
            char random = rand() % 91 + 32;
            jazzy_arr[i] = random;
        }

    cout << "Your string is now: " << jazzy_arr;

}

/* Prompts user to input new string */
char NewString(char arr[])
{
    const int size = 100;
    cin.getline(arr, size);

    return arr[size];
}




