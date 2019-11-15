#include <iostream>
#include <cstring>
#include "Media.h"

class Music : public Media
{
 public:
  Music(char*, int, char*, float, char*);
  char* getArtist();
  float getDuration();
  char* getPublisher();
  int getType();
  virtual ~Music();
 private:
  char* artist;
  float duration;
  char* publisher;
};
