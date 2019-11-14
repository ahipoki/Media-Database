#include <iostream>
#include <cstring>
#include "VideoGame.h"
using namespace V;

VideoGame::VideoGame(char newTitle[80], int newYear, char newPublisher[80], int newRating, int newID, int newType)
{
  title = newTitle;
  year = newYear;
  publisher = newPublisher;
  rating = newRating;
  type = newType;
};

char VideoGame::getTitle() {//Method for getting the title
  return title;
}
int VideoGame::getYear() {//Method for getting the year
  return year;
}

char VideoGame::getPublisher() {//Method for getting the publisher
  return publisher;
}

int VideoGame::getRating() {//Method for getting the rating
  return rating;
}

int VideoGame::getType() {//Method for getting the type
  return type;
}
