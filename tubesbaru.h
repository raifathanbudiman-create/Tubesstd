#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <string>
#include <vector>

using namespace std::string;

struct Lagu {
    int id;
    string judul;
    string artis;
    string genre;
    string album;
    int tahun;
    int durasi;

    Lagu* next;
    Lagu* prev;
};


struct ListLagu {
    Lagu* first;
    Lagu* last;
};


struct LaguPlaylist {
    Lagu* ref;
    LaguPlaylist* next;
};

struct Playlist {
    int id;
    string nama;
    LaguPlaylist* firstLagu;
    Playlist* next;
};


#endif
