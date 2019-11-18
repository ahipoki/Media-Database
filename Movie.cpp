#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Media.h"
using namespace std;

Movie::Movie(char* newTitle, int newYear, char* newDirector, float newDuration, int newRating) : Media(newTitle, newYear) 
{
  //title = newTitle;
  strcpy(director, newDirector);
  //director = newDirector;
  //year = newYear;
  duration = newDuration;
  rating = newRating;
  //type = newType;
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
  delete []director;
}
