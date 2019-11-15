#include <iostream>
#include <cstring>
#include "VideoGame.h"
#include "Media.h"

VideoGame::VideoGame(char* newTitle, int newYear, char* newPublisher, int newRating): Media(newTitle, newYear)
{
  strcpy(publisher, newPublisher);
  rating = newRating;
};

char* VideoGame::getPublisher() {//Method for getting the publisher
  return publisher;
}

int VideoGame::getRating() {//Method for getting the rating
  return rating;
}

int VideoGame::getType() {//Method for getting the type
  return 1;
}

VideoGame::~VideoGame() {
  delete []publisher;
}
