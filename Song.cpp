//
// Started by Abdurrahman Alyajouri on 10/27/2023.
//

#include "Song.h"

Song::Song(const Song::string& data, Song* previous_link, Song* next_link) {
    song_file_name = data;
    previous_link = previous_song_ptr;
    next_link = next_song_ptr;
    return;
}
