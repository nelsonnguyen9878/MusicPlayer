
// Filename: Playlist.cpp
// started by Nelson Nguyen 12/29/23

// libraries
#include <cstdlib>
#include "Song.h"
#include "Playlist.h"
using namespace std;

// constructor definition
Playlist::Playlist() {
    head_ptr = NULL; // pointing to no current songs
    many_songs = 0; // starts off at 0 songs in the playlist
}

void Playlist::InsertSong(const Playlist::string &add_song, Song *head_ptr) {
    head_ptr = new Song(add_song, head_ptr);
    ++many_songs;
}
