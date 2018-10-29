/* Melissa Ma
 * COP3330-0003
 * HW #4
 * Summary: DEFINES the functions for a Playlist class,
 * that will contain a ist of songs.  */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include "playlist.h"

using namespace std;

/* Default constructor */
Playlist::Playlist() {

    maxSize = 50;
    currentSize = 0;
    trackList = new Song[maxSize];

}

/* Destructor to clean up memory */
Playlist::~Playlist() {
    delete [] trackList;
}

/* Inserts a new song into the playlist */
void Playlist::AddSong(const char *t, const char *a,
                       char st, int sz) {

    Style category;

    if (st == 'P')
    {
        category = POP;
    }

    else if (st == 'R')
    {
        category = ROCK;
    }

    else if (st == 'A')
    {
        category = ALTERNATIVE;

    }

    else if (st == 'C')
    {
        category = COUNTRY;
    }

    else if (st == 'H')
    {
        category = HIPHOP;
    }

    else if (st == 'Y')
    {
        category = PARODY;
    }

    else
    {
        cout << "Invalid Category entry. Please re-enter." << endl;
    }

    trackList[currentSize].Set(t, a, category, sz);

}



void Playlist::Show() const {

    cout << trackList[currentSize];
}

//void Playlist::Resize() {
//
//    int unused = maxSize - currentSize;
//    if (unused > 5) {
//
//        currentSize = currentSize
//        cout << "** Array being resized to " << currentSize << "slots" << endl;
//        Song *temp = new Song[currentSize];
//
//        for (int i = 0; i < currentSize; i++)
//        {
//            temp[i] = trackList[i];
//            delete [] trackList;
//            trackList = temp;
//        }
//    }
//}

//Song Playlist::FindSong(const char *ta) const {
//    return Song();
//}





