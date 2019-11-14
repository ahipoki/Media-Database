#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

Media::Media(char newTitle, int newYear, int newType) {
  title = newTitle;
  year = newYear;
  type = newType;
}

char Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}

int Media::getType() {
  return type;
}
