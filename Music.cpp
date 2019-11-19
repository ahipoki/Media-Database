#include <iostream>
#include <cstring>
#include "Music.h"
#include "Media.h"

Music::Music(char* newTitle, int newYear, char* newArtist, float newDuration, char* newPublisher) : Media(newTitle, newYear)
{
  artist = new char[strlen(newArtist)+1];
  strcpy(artist, newArtist);
  duration = newDuration;
  publisher = new char[strlen(newPublisher)+1];
  strcpy(publisher, newPublisher);
}

char* Music::getArtist() 
{
  return artist;
}

float Music::getDuration() 
{
  return duration;
}

char* Music::getPublisher() 
{
  return publisher;
}

int Music::getType() 
{
  return 3;
}

Music::~Music() 
{
  delete artist;
  delete publisher;
}
