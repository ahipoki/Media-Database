#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame(char[] newTitle, int newYear, char[] newPublisher, int newRating, int newType)
{
  title = newTitle;
  year = newYear;
  publisher = newPublisher
  rating = newRating;
  type = newType;
}

char* VideoGame::getTitle() {//Method for getting the title
  std::cout << "Title" << std::endl;
}

int VideoGame::getYear() {//Method for getting the year
  std::cout << "Year" << std::endl;
}

char* VideoGame::getPublisher() {//Method for getting the publisher
  std::cout << "Publisher" << std::endl;
}

int VideoGame::getRating() {//Method for getting the rating
  std::cout << "Rating" << std::endl;
}

int VideoGame::getType() {//Method for getting the type
  std::cout << "Type" << std::endl;
}
