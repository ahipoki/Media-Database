#include <iostream>
#include <cstring>

class Movie
{
 public:
  Movie(char[], int, int, int);
  //char getTitle();
  char getDirector();
  //int getYear();
  int getDuration();
  int getRating();
  int getType();
 private:
  //char title;
  char director[80];
  //int year;
  int duration;
  int rating;
  int type;
};

