#include <iostream>
#include <cstring>
#include "Movie.h"
using namespace std;

Movie::Movie(char[] newTitle, char[] newDirector, int newYear, float newDuration, int rating, int newType) {
  title = newTitle;
  director = newDirector;
  year = newYear;
  duration = newDuration;
  rating = newRating;
  type = newType;
}

char* Movie::getTitle() {
  cout << "Title" << endl;
  //return char[80];
}

char* Movie::getDirector() {
  cout << "Director" << endl;
  //return char[80];
}

int Movie::getYear() {
  cout << "Year" << endl;
  //return int;
}

float Movie::getDuration() {
  cout << "Duration" << endl;
  //return float;
}

int Movie::getRating() {
  cout << "Rating" << endl;
  //return float;
}

int Movie::getType() {
  cout << "Type" << endl;
  return type;
}
