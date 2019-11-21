#include <iostream>
#include <cstring>
#include "Media.h"

/* Finn McKinley
 * 11/19/19
 * VideoGame.h file
 */

class VideoGame : public Media
{//.h file of video game class
 public:
  VideoGame(char*, int, char*, int);
  char* getPublisher();
  //Get publisher
  int getRating();
  //Get rating
  int getType();
  //Get type of media
  ~VideoGame();
  //Video game destructor
 private:
  char* publisher;
  //Publisher
  int rating;
  //Rating
};
