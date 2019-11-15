#include <iostream>
#include <cstring>
#include "Media.h"

class VideoGame : public Media
{
public:
  VideoGame(char*, int, char*, int);
  char* getPublisher();
  int getRating();
  int getType();
private:
  char publisher[80];
  int rating;
};
