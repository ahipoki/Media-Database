#include <iostream>
#include <cstring>
#include "Music.h"
#include "Media.h"

Music::Music(char* newTitle, int newYear, char* newArtist, float newDuration, char* newPublisher) : Media(newTitle, newYear)
{//Music.cpp file
  artist = new char[strlen(newArtist)+1];
  //New artist
  strcpy(artist, newArtist);
  //Copy artist onto the new artist
  duration = newDuration;
  //Duration equals new duration
  publisher = new char[strlen(newPublisher)+1];
  //New publisher
  strcpy(publisher, newPublisher);
  //Copy publisher onto the new publisher
}

char* Music::getArtist() 
{//Get artist method
  return artist;
  //Return artist
}

float Music::getDuration() 
{//Get duration method
  return duration;
  //Return duration
}

char* Music::getPublisher() 
{//Get publisher method
  return publisher;
  //Return publisher
}

int Music::getType() 
{//Get media type method
  return 3;
  //Return 3
}

Music::~Music() 
{//Music destructor
  delete artist;
  delete publisher;
  //Delete char arrays
}
