/* Melissa Ma
 * COP3330-0003
 * HW #3
 * Summary: DECLARES the functions for a Playlist class,
 * that will contain a ist of songs.  */

#include <iostream>
#include "song.h"

using namespace std;


class Playlist {

public:
    Playlist();
    ~Playlist();                    // Destructor

    /* mutator functions */
    void AddSong(const char *t, const char *a,
                 char st, int sz);               // Adds a song to the playlist
    void DeleteSong();                     // Deletes a song from the playlist

    /* standard input and output functions */
    void Show() const;              // Shows the entire playlist
    void CatSummary() const;        /* Shows a summary of the songs and size
                                     * of a category on the playlist */
    void SizeSummary() const;       // Shows the size of the whole playlist

    /* accessor functions */
    Song FindSong(const char *ta) const;          // Finds a song on the playlist




private:

    void Resize();                  /* increases or decreases size of array
                                     * when required */

    Song *trackList;                // pointer to list of songs
    int maxSize,                    // maximum number of characters for all songs
            currentSize;            // current number of characters for all songs







};



