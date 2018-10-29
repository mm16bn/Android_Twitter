/* Melissa Ma
 * COP3330-0003
 * HW #4
 * Summary: Defines a menu that creates a single Playlist
 * object and implements an interface to allow interaction
 * with the Playlist. */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include "playlist.h"
#include "song.h"


using namespace std;

void Menu();


int main()
{
    Playlist p1;
    char t[36], a[21];
    char st;
    int sz;

    char userChoice;

    Menu();

    do {
        cin >> userChoice;
        userChoice = static_cast<char>(toupper(userChoice));

        cout << "this is user choice: " << userChoice << endl;


        switch(userChoice) {
            case 'A':

                cout << "adding a song" << endl;
                cout << "\nEnter title: ";
                cin.getline(t, 36);

                cout << "\nEnter artist:";
                cin.getline(a, 21);

                cout << "Enter Category - (P)op, (R)ock, "
                        "(A)lternative, (C)ountry, (H)iphop, or Parod(Y): ";
                cin >> st;

//            if (st != )
                cout << "Enter size: ";
                cin >> sz;



                p1.AddSong(t, a, st, sz);


                break;

            case 'F':
                cout << "find function " << endl;

//            p1.FindSong(ta);

                break;

            case 'D':
                cout << "deleteing song" << endl;
                break;

            case 'S':
                cout << "showing entire playlist" << endl;
                p1.Show();
                break;

            case 'C':
                cout << "showing cateogry summary" << endl;
                break;

            case 'Z':
                cout << "showing playlist size" << endl;
                break;

            case 'M':
                cout << "showing menu" << endl;
                Menu();
                break;

            case 'X':
                cout << "quitting!" << endl;
                break;

            default:
                cout << "Invalid menu choice. Try again." << endl;
                break;
        }

    } while (userChoice != 'X');



}


void Menu()
{

    cout << "*** Welcome to Playlist Manager ***\n"
            "\n"
            "    *** PLAYLIST MENU ***\n"
            "    A       Add a song to playlist\n"
            "    F       Find a song in the playlist\n"
            "    D       Delete a song\n"
            "    S       Show the playlist\n"
            "    C       List songs from one Category\n"
            "    Z       Total playlist size\n"
            "    O       Sort playlist\n"
            "    M       Show this Menu\n"
            "    X       eXit Program\n"
            "        \n"
            "> ";

}