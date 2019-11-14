#include <iostream>
#include <cstring>
#include "Music.h"
#include "Media.h"

Music::Music(char[] newArtist, float newDuration, char[] newPublisher, int newType) {
  //title = newTitle;
  artist = newArtist;
  //year = newYear;
  duration = newDuration;
  publisher = newPublisher;
  type = newType;
}

//char Music::getTitle() {
//return title;
//}

char Music::getArtist() {
  return artist;
}

//int Music::getYear() {
//return year;
//}

float Music::getDuration() {
  return duration;
}

char Music::getPublisher() {
  return publisher;
}

int Music::getType() {
  return type;
}
