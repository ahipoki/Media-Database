#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Media.h"
using namespace std;

Movie::Movie(char* newTitle, int newYear, char* newDirector, float newDuration, int newRating) : Media(newTitle, newYear) 
{
  director = new char[strlen(newDirector)+1];
  strcpy(director, newDirector);
  duration = newDuration;
  rating = newRating;
}

char* Movie::getDirector() 
{
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
