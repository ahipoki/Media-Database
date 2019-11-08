#include <iostream>
#include <string.h>
using namespace std;

class VideoGame
{
  public:
  VideoGame(char[], int, char[], int, int, int);
    char* getTitle();
    int getID();
    int getYear();
    char* getPublisher();
    int getRating();
    int getType();
 private:
    int type;
    char title[80];
    int rating;
    int year;
    int ID;
    char publisher[80];
};
