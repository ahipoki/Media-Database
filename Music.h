#include <iostream>
#include <cstring>
using namespace std;

class Music
{
 public:
  Music(char[]);
  char* getType();
  int getID();
  char getTitle();
  char getArtist();
  int getYear();
  float getDuration();
  char getPublisher();
  int getType();
 private:
  char* type[80];
  char artist[80];
  float duration;
  char publisher[80];
}
