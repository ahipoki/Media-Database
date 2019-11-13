#include <iostream>
#include <cstring>
using namespace std;

class VideoGame
{
  public:
<<<<<<< HEAD
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
=======
    VideoGame(char[], int, char[], int, int);
    char getTitle();
    int getYear();
    char getPublisher();
    int getRating();
    int getType();
 private:
    char title[80];
    int year;
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
    char publisher[80];
    int publisher;
    int rating;
};
