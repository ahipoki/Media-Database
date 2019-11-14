#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame(char newTitle[], int newYear, char newPublisher[], int newRating, int newID, int newType)
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
