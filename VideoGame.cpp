#include <iostream>
#include <cstring>
#include "VideoGame.h"
using namespace std;

VideoGame::VideoGame(char[] newTitle, int newYear, char[] newPublisher, int newRating, int newType)
{
  title = newTitle;
  year = newYear;
  publisher = newPublisher
  rating = newRating;
  type = newType;
}

char* VideoGame::getTitle() {//Method for getting the title
  cout<<"Title"<<endl;
}

int VideoGame::getYear() {//Method for getting the year
  cout<<"Year"<<endl;
}

char* VideoGame::getPublisher() {//Method for getting the publisher
  cout<<"Publisher"<<endl;
}

int VideoGame::getRating() {//Method for getting the rating
  cout<<"Rating"<<endl;
}

int VideoGame::getType() {
  cout<<"Type"<<endl;
}
