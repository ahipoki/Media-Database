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
}

char* VideoGame::getTitle() {//Method for getting the title
  cout<<"Title"<<endl;
  //return char[80];

int VideoGame::getYear() {//Method for getting the year
  std::cout << "Year" << std::endl;
}

char* VideoGame::getPublisher() {//Method for getting the publisher
  cout<<"Publisher"<<endl;
  //return char[80];
}

int VideoGame::getRating() {//Method for getting the rating
  cout<<"Rating"<<endl;
  //return float;
}

int VideoGame::getType() {//Method for getting the type
  std::cout << "Type" << std::endl;
}
