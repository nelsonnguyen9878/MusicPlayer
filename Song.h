//
// Started by Abdurrahman Alyajouri on 10/27/2023.
//

#ifndef MUSICPLAYER_SONG_H
#define MUSICPLAYER_SONG_H

#include <string>

class Song {
public:
    typedef std::string string;
    //constructor
    Song(const string&, Song*, Song*);
private:
    string song_file_name;
    Song* next_song_ptr;
    Song* previous_song_ptr;
};


#endif //MUSICPLAYER_SONG_H
