#include <iostream>
#include <cstring>
using namespace std;

class Movie
{
 public:
  Movie(char[], char[], int, float, int, int);
  char getTitle();
  char getDirector();
  int getYear();
  float getDuration();
  int getRating();
  int getType();
 private:
  char title;
  char director[80];
  int year;
  float duration;
  int rating;
  int type;
}

