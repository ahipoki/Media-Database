#include <iostream>
#include <cstring>
#include "Media.h"

/* Finn McKinley
 * 11/19/19
 * Movie.h file
 */

class Movie : public Media
{//Movie.h class
 public:
  Movie(char*, int, char*, float, int);
  char* getDirector();
  //Get director
  float getDuration();
  //Get duration
  int getRating();
  //Get rating
  int getType();
  //Get type
  ~Movie();
  //Movie destructor
 private:
  char* director;
  //Director
  float duration;
  //Duration
  int rating;
  //Rating
};

