#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Media.h"
using namespace std;

Movie::Movie(char* newTitle, int newYear, char* newDirector, float newDuration, int newRating) : Media(newTitle, newYear) 
{//Movie.cpp file
  director = new char[strlen(newDirector)+1];
  //New director
  strcpy(director, newDirector);
  //Copy director to the new director
  duration = newDuration;
  //New duration
  rating = newRating;
  //New rating
}

char* Movie::getDirector() 
{//Get director method
  return director;
}

int Movie::getRating() 
{
  return rating;
}

float Movie::getDuration() 
{
  return duration;
}

int Movie::getType() 
{
  return 2;
}

Movie::~Movie() 
{
  delete director;
}
