#include <iostream>
#include <cstring>
#include "Media.h"



class VideoGame : public Media{
 public:
  VideoGame(char*, int, char*, int);
  char* getPublisher();
  int getRating();
  int getType();
  ~VideoGame();
 private:
  char* publisher;
  int rating;
};
