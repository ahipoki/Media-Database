#include <iostream>
#include <cstring>
#include "Music.h"
using namespace std;

Music::Music(char* newtype) {
  type = newtype;
  duration = 0.0;
  //char artist[80];
  //char publisher[80];
}

char* Music::getDescription() {
  return description;
}

char* Music::getTitle() {
  cout<<"Title"<<endl;
  //return char[80];
}

char* Music::getArtist() {
  cout<<"Artist"<<endl;
  //return char[80];
}

int Music::getYear() {
  cout<<"Year"<<endl;
  //return int;
}

float Music::getDuration() {
  cout<<"Duration"<<endl;
  //return float;
}

char* Music::getPublisher() {
  cout<<"Publisher"<<endl;
  //return char[80];
}
