#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music(int newtype) {
  type = newtype;
  duration = newDuration;
}

char* Music::getDescription() {
  std::cout << "Type" << std::endl;
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
