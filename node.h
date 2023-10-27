// Created 10/26/23
// Started by Nelson Nguyen





#ifndef MUSICPLAYER_NODE_H
#define MUSICPLAYER_NODE_H
#include <cstdlib> // allows us to use NULL
#include <iostream> 



class node {
public:
    // TYPEDEF
    // type is string, because we will be putting the data as strings
    typedef std::string value_type; 

    // CONSTRUCTOR
    node( const value_type& init_data = value_type(),
          node* init_link = NULL)
    { song_field = init_data; link_field = init_link; }

    // Member functions to set the song and link fields
    void set_song(const value_type new_data) { song_field = new_data; }
    void set_link(node* new_link) { link_field = new_link; }

    // Two member function to retrieve the current data
    const node* link() const { return link_field; }
    node* link() { return link_field; }

private:
    value_type song_field;
    node* link_field;
};


#endif //MUSICPLAYER_NODE_H
