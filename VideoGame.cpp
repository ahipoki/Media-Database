#include <iostream>
#include <string.h>
#include "VideoGame.h"
using namespace std;

VideoGame::VideoGame(string* newtype)
{
  type = newtype;
  id = 0;
  //publisher
  rating = 0.0;
}

string* VideoGame::getType() {
  return type;
}

string* VideoGame::getTitle() {//Method for getting the title
  cout<<"Title"<<endl;
  //return char[80];
}

int VideoGame::getYear() {//Method for getting the year
  cout<<"Year"<<endl;
  //return int;
}

string* VideoGame::getPublisher() {//Method for getting the publisher
  cout<<"Publisher"<<endl;
  //return char[80];
}

float VideoGame::getRating() {//Method for getting the rating
  cout<<"Rating"<<endl;
  //return float;
}

//string* VideoGame::getType() {
//cout<<"Type"<<endl;
  //return int;
//}
