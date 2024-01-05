

// started by Nelson 12/29/23
#ifndef PLAYLIST_H
#define PLAYLIST_H


// libraries
#include <cstdlib>
#include "Song.h"

// start of class
class Playlist {
public:
    //TYPEDEFS
    typedef std::size_t size_type;
    typedef Song::string string;

    // constructor
    Playlist();

    // MODIFIERS WE WANT IN THE PLAYLIST
    // - insert song function
    // - remove a song function
    // - shuffle function
    // - repeat function
    // - pause/play function
    void InsertSong(const string& add_song, Song *head_ptr);
    void DisplayAllSongs();

    // CONST MEMBER FUNCTIONSS
    size_type size() const { return many_songs; }


private:
    Song *head_ptr; // head ptr of the list
    size_type many_songs; // numbers of songs in the playlists





};
#endif
