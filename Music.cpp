#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music(char[] newTitle, char[] newArtist, int newYear, float newDuration, char[] newPublisher, int newType) {
  title = newTitle;
  artist = newArtist;
  year = newYear;
  duration = newDuration;
  publisher = newPublisher;
  type = newType;
}

char* Music::getTitle() {
  std::cout << "Title" << std::endl;
}

char* Music::getArtist() {
  std::cout << "Artist" << std::endl;
}

int Music::getYear() {
  std::cout << "Year" << std::endl;
}

float Music::getDuration() {
  std::cout << "Duration" << std::endl;
}

char* Music::getPublisher() {
  std::cout << "Publisher" << std::endl;
}

int Music::getType() {
  std::cout << "Type" << std::endl;
}
