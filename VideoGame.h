#include <iostream>
#include <string.h>
using namespace std;

class VideoGame
{
  public:
    VideoGame(string*);
    string* getType();
    int getID();
    char getTitle();
    int getYear();
    char getPublisher();
    float getRating();
    //int getType();
 private:
    string* type;
    float rating;
    char publisher[80];
};
