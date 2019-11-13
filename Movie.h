#include <iostream>
#include <cstring>
using namespace std;

class Movie
{
 public:
<<<<<<< HEAD
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
=======
  Movie(char[], char[], int, float, int, int);
  char getTitle();
  char getDirector();
  int getYear();
  float getDuration();
  int getRating();
  int getType();
 private:
  char title;
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
  char director[80];
  int year;
  float duration;
<<<<<<< HEAD
  int year;
};
=======
  int rating;
  int type;
}
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
