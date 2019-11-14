#include <iostream>
#include <cstring>
#include "Media.h"

class Movie : public Media
{
 public:
  Movie(char*, int, char*, float, int);
  //char getTitle();
  char* getDirector();
  //int getYear();
  float getDuration();
  int getRating();
  int getType();
 private:
  //char title;
  char director[80];
  //int year;
  float duration;
  int rating;
};

