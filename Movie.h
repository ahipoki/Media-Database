#include <iostream>
#include <cstring>
#include "Media.h"

class Movie : public Media
{
 public:
  Movie(char*, int, char*, float, int);
  char* getDirector();
  float getDuration();
  int getRating();
  int getType();
  ~Movie();
 private:
  char* director;
  float duration;
  int rating;
};

