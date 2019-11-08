#include <iostream>
#include <cstring>
using namespace std;

class Movie
{
 public:
  Movie(char*, int, int, int, char*, float);
  int getType();
  char* getTitle();
  char* getDirector();
  int getYear();
  float getDuration();
  int getRating();
 private:
  int type;
  char title[80];
  int rating;
  char director[80];
  float duration;
  int year;
};
