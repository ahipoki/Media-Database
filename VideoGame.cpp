#include <iostream>
#include <cstring>
#include "VideoGame.h"
using namespace std;

VideoGame::VideoGame(char newTitle[], int newYear, char newPublisher[], int newRating, int newID, int newType)
{
  strcpy(title, newTitle);
  ID = newID;
  strcpy(publisher, newPublisher);
  rating = newRating;
  type = newType;
}

int VideoGame::getType() {
  return type;
}

char* VideoGame::getTitle() {//Method for getting the title
  cout<<"Title"<<endl;
  //return char[80];
}

int VideoGame::getYear() {//Method for getting the year
  cout<<"Year"<<endl;
  //return int;
}

char* VideoGame::getPublisher() {//Method for getting the publisher
  cout<<"Publisher"<<endl;
  //return char[80];
}

int VideoGame::getRating() {//Method for getting the rating
  cout<<"Rating"<<endl;
  //return float;
}
