#include <iostream>
#include <cstring>
using namespace std;

class VideoGame
{
 public:
    VideoGame(char[], int, char[], int, int);
    char getTitle();
    int getYear();
    char getPublisher();
    int getRating();
    int getType();
 private:
    char title[80];
    int year;
    char publisher[80];
    int publisher;
    int rating;
};
