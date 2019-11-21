#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Media.h"
using namespace std;

/* Finn McKinley
 * 11/19/19
 * Movie.cpp file
 */

Movie::Movie(char* newTitle, int newYear, char* newDirector, float newDuration, int newRating) : Media(newTitle, newYear) 
{//Movie.cpp class
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
  //Return director
}

int Movie::getRating() 
{//Get rating method
  return rating;
  //Return rating
}

float Movie::getDuration() 
{//Get duration method
  return duration;
  //Return duration
}

int Movie::getType() 
{//Get type method
  return 2;
  //Return 2
}

Movie::~Movie() 
{//Movie destructor
  delete director;
  //Delete char arrays
}
