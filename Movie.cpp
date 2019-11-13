#include <iostream>
#include <cstring>
#include "Movie.h"
using namespace std;

<<<<<<< HEAD
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
=======
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
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
  //return char[80];
}

char* Movie::getDirector() {
<<<<<<< HEAD
  cout<<"Director"<<endl;
=======
  cout << "Director" << endl;
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
  //return char[80];
}

int Movie::getYear() {
  cout << "Year" << endl;
  //return int;
}

<<<<<<< HEAD
int Movie::getRating() {
  cout<<"Rating"<<endl;
  //return int;
}

float Movie::getDuration() {
  cout << "Duration" << endl;
=======
float Movie::getDuration() {
  cout << "Duration" << endl;
  //return float;
}

int Movie::getRating() {
  cout << "Rating" << endl;
>>>>>>> f946eff7a1eb8ab6fa3065fd8d0078589d5618fc
  //return float;
}

int Movie::getType() {
  cout << "Type" << endl;
  return type;
}
