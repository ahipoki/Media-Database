#include <iostream>
#include <cstring>
#include "Media.h"

/* Finn McKinley
 * 11/19/19
 * Music.h file
 */

class Music : public Media
{//.h of music class
 public:
  Music(char*, int, char*, float, char*);
  char* getArtist();
  //Get artist
  float getDuration();
  //Get duration
  char* getPublisher();
  //Get publisher
  int getType();
  //Get type of media
  ~Music();
  //Music destructor
 private:
  char* artist;
  //Artist
  float duration;
  //Duration
  char* publisher;
  //Publisher
};
