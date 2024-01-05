//
// Started by Abdurrahman Alyajouri on 10/27/2023.
//
// Nelson Added: Song();
//               SetSong();
//               SetNextSong();
//               link();

#ifndef MUSICPLAYER_SONG_H
#define MUSICPLAYER_SONG_H

#include <cstdlib> // allows us to use NULL
#include <string>

class Song {
public:

    // TYPEDEF
    typedef std::string string;

    //constructor
    Song(const string& data = "test", Song* previous_link = NULL, Song* next_link = NULL);

    //member function to return current song
    string CurrSong() const { return song_file_name; }


    // member functions to set the song and link
    void SetSong(const string& new_song) { song_file_name = new_song; }
    void SetNextSong(Song* new_link)     { next_song_ptr = new_link; }

    // retrieve current link
    const Song* link() { return next_song_ptr; }



private:
    string song_file_name;
    Song* next_song_ptr;
    Song* previous_song_ptr;
};


#endif //MUSICPLAYER_SONG_H
