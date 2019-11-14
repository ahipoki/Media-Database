#pragma once

#include <iostream>
#include <cstring>

namespace V
{
  class VideoGame
  {
  public:
    VideoGame(char[80], int, char[80], int, int);
    char getTitle();
    int getYear();
    char getPublisher();
    int getRating();
    int getType();
  private:
    char title[80];
    int year;
    char publisher[80];
    int rating;
    int type;
  };
}
