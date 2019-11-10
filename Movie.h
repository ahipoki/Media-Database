#include <iostream>
#include <cstring>
using namespace std;

class Movie
{
 public:
  Movie(char[]);
  int getType();
  int getID();
  char getTitle();
  char getDirector();
  int getYear();
  float getDuration();
  float getRating();
  int getType();
 private:
  char type[80];
  int rating;
  char director[80];
  float duration;
}
