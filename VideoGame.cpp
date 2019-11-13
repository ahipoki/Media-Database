#include <iostream>
#include <cstring>
#include "VideoGame.h"

<<<<<<< HEAD
VideoGame::VideoGame(char newTitle[], int newYear, char newPublisher[], int newRating, int newID, int newType)
{
  strcpy(title, newTitle);
  ID = newID;
  strcpy(publisher, newPublisher);
=======
VideoGame::VideoGame(char[] newTitle, int newYear, char[] newPublisher, int newRating, int newType)
{
  title = newTitle;
  year = newYear;
  publisher = newPublisher
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
  rating = newRating;
  type = newType;
}

<<<<<<< HEAD
int VideoGame::getType() {
  return type;
}

char* VideoGame::getTitle() {//Method for getting the title
  cout<<"Title"<<endl;
  //return char[80];
=======
char* VideoGame::getTitle() {//Method for getting the title
  std::cout << "Title" << std::endl;
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
}

int VideoGame::getYear() {//Method for getting the year
  std::cout << "Year" << std::endl;
}

char* VideoGame::getPublisher() {//Method for getting the publisher
<<<<<<< HEAD
  cout<<"Publisher"<<endl;
  //return char[80];
}

int VideoGame::getRating() {//Method for getting the rating
  cout<<"Rating"<<endl;
  //return float;
}
=======
  std::cout << "Publisher" << std::endl;
}

int VideoGame::getRating() {//Method for getting the rating
  std::cout << "Rating" << std::endl;
}

int VideoGame::getType() {//Method for getting the type
  std::cout << "Type" << std::endl;
}
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
