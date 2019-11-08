#include <iostream>
#include <cstring>
#include "Movie.h"
using namespace std;

Movie::Movie(char newTitle[], int newYear, int newRating, int newType, char newDirector[], float newDuration) {
  strcpy(director, newDirector);
  type = newType;
  rating = newRating;
  strcpy(title, newTitle);
  year = newYear;
  duration = newDuration;
}

int Movie::getType() {
  return type;
}

char* Movie::getTitle() {
  cout<<"Title"<<endl;
  //return char[80];
}

char* Movie::getDirector() {
  cout<<"Director"<<endl;
  //return char[80];
}

int Movie::getYear() {
  cout<<"Year"<<endl;
  //return int;
}

int Movie::getRating() {
  cout<<"Rating"<<endl;
  //return int;
}

float Movie::getDuration() {
  cout << "Duration" << endl;
  //return float;
}
