#include <iostream>
#include <cstring>
#include "Media.h"

Media::Media(char* newTitle, int newYear) {
  title = new char[strlen(newTitle)+1];
  strcpy(title, newTitle);
  year = newYear;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}

int Media::getType() {

}

Media::~Media() {
  delete []title;
}
