/* Melissa Ma
 * COP3330-0003
 * HW #4
 * Summary: DEFINES the functions for a Song class,
 * that will generate and modify a song object.  */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

#include "song.h"

using namespace std;

Song::Song()
{
    strcpy(title, " ");
    strcpy(artist, " ");
    size = 0;

}

/*The operator<< overload should print out a Song object on one line
 * (to the given ostream) -- use no more than 80 characters per line -- as
 * follows, in an organized manner. Size should be printed in Megabytes
 * (use 1000 kilobytes = 1 MB for this calculation), to 1 decimal place.
 * The category abbreviations used should be: Pop, Rock, Alt, Ctry, HH, Par */

ostream &operator<<(ostream &os, const Song &s) {

    os << setw(36) << "Title" << setw(21) << "Artist" << setw(4) << "Style"
       << fixed << setprecision(1) << setw(4) << "Size (MB)" << endl;

    os << s.title << s.artist << s.category << s.size;

    return os;
}


// the Set function should allow incoming data to be received through
//  parameters and loaded into the member data of the object.  (i.e.
//  this function "sets" the state of the object to the data passed in).
//  The parameters t, a, st, and sz represent the title, artist, style,
//  and size of the song file, respectively.

void Song::Set(const char *t, const char *a, Style st, int sz) {


    strcpy(title, t);
    strcpy(artist, a);


    category = st;

    /* sets the SIZE of the song (in kilobytes) from user input */
    size = sz;



}

const char *Song::GetTitle() const {
    return title;
}


const char *Song::GetArtist() const {
    return artist;
}

int Song::GetSize() const {
    return size;
}


Style Song::GetCategory() const {
    return category;
}



