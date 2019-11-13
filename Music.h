#include <iostream>
#include <cstring>
using namespace std;

class Music
{
 public:
  Music(char[], char[], int, float, char[], int);
  char getTitle();
  char getArtist();
  int getYear();
  float getDuration();
  char getPublisher();
  int getType();
 private:
  char title[80];
  char artist[80];
  int year;
  float duration;
  char publisher[80];
  int type;
};
