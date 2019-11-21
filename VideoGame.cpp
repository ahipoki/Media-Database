#include <iostream>
#include <cstring>
#include "VideoGame.h"
#include "Media.h"

/* Finn McKinley
 * 11/19/19
 * VideoGame.cpp file
 */

VideoGame::VideoGame(char* newTitle, int newYear, char* newPublisher, int newRating): Media(newTitle, newYear)
{//.cpp of video game class
  publisher = new char[strlen(newPublisher)+1];
  //New publisher
  strcpy(publisher, newPublisher);
  //Copy publisher onto the new publisher
  rating = newRating;
  //New rating equals rating
};

char* VideoGame::getPublisher() 
{//Method for getting the publisher
  return publisher;
  //Return publisher
}

int VideoGame::getRating() 
{//Method for getting the rating
  return rating;
  //Return rating
}

int VideoGame::getType() 
{//Method for getting the type
  return 1;
  //Return 1
}

VideoGame::~VideoGame() 
{//Method for deletion
  delete publisher;
  //Delete char arrays
}
